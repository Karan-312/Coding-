/*#include<iostream>
using namespace std;

// Function to perform selection sort
void selectionsort(int arr[], int n) {
    // Outer loop selects the position to fill
    for(int i = 0; i <= n - 2; i++) {
        // minindex stores the index of the smallest element found so far
        int minindex = i;
        
        // Inner loop searches for the smallest element in the unsorted part
        for(int j = i + 1; j < n; j++) {
            // If a smaller element is found, update minindex
            if(arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        
        // Swap the smallest element found with the element at position i
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}

// Main function to take input and call selection sort
int main() {
    int n;
    cin >> n;  // Input size of array
    int arr[n];  // Declare array of size n
    
    // Input the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Call the selectionsort function to sort the array
    selectionsort(arr, n);
    
    // Output the sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    
    return 0;  // Return 0 to indicate successful execution
}




#include<iostream>
using namespace std;

void bubblesort(int arr[] , int n ){
    for( int i  =n-1 ; i>=0 ; i--) {

        for( int j = 0 ; j<=i-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j] =temp;
            }
        }
    }
}
int main () {
    int n ;
    cin >> n ;
    int arr[n];
    for( int i = 0 ; i<n ;i++){
        cin>> arr[i];

    }
    bubblesort(arr,n);
    for(int i = 0 ; i< n ;i++){
        cout << arr[i] << " ";
    }
    return 0 ;
}



#include<iostream>
using namespace std;

void insertionsort(int arr[], int n) {
    // Start from the second element (index 1) because the first element is already sorted
    for(int i = 1; i < n; i++) {
        int key = arr[i];  // Pick the current element as 'key'
        int j = i - 1;     // Initialize j as the index of the last element of the sorted part
        
        // Shift elements of the sorted part that are greater than 'key' to the right
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Move the element one position to the right
            j--;  // Move to the next element on the left
        }
        
        // Place the 'key' in its correct position
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;  // Input the size of the array
    int arr[n];  // Declare the array
    
    // Input the elements of the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Sort the array using insertion sort
    insertionsort(arr, n);
    
    // Output the sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

// Merge function to combine two sorted halves
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // Temporary vector to store sorted elements
    int left = low, right = mid + 1;

    // Compare elements from both halves and push the smaller one
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from the left half, if any
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from the right half, if any
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back into the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive function to implement merge sort
void Ms(vector<int> &arr, int low, int high) {
    if (low >= high) return; // Base case: single element

    int mid = (low + high) / 2; // Find the middle point
    Ms(arr, low, mid);          // Sort the left half
    Ms(arr, mid + 1, high);     // Sort the right half
    merge(arr, low, mid, high); // Merge the sorted halves
}

// Function to call the merge sort
void mergesort(vector<int> &arr, int n) {
    Ms(arr, 0, n - 1); // Start the merge sort from the full array
}

// Driver code to test merge sort
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10}; // Example array
    int n = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergesort(arr, n); // Call merge sort

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    
}
*/
#include<iostream>
#include<vector>
using namespace std;

int partition (vector <int> & arr , int low , int high){
    
    int pivot = arr[low];
    int i = low ;
    int j = high ;
    while( i < j ) {
        while( arr[i] <= pivot && i <= high - 1 ){
            i++;
        }

        while( arr[j] > pivot && j >= low + 1 ) {
            j--;
        }
        if( i < j ) swap ( arr[i] , arr[j] );
    }
    swap (arr[low],arr[j]);
    return j ;
}
void qs ( vector<int> & arr , int low , int high ) {
    if( low < high ) {

        int pIndex = partition(arr, low , high);
        qs(arr , low , pIndex - 1);
        qs(arr , pIndex + 1 , high);
    }
}

void  quickSort (vector<int> & arr, int size){
    qs(arr,0,arr.size() - 1 );
    
}

int main () {

   vector<int> arr = { 32 , 43 ,23 ,132, 343 , 5};

   int n = arr.size();

   cout << " original array :";
   for( int i = 0 ; i < n ; i++) {
    cout << arr[i] << " " ;
}
cout << endl;
quickSort ( arr , n );

cout << " sorted array :";

for( int i = 0 ; i < n ; i++) {

    cout << arr[i] << " ";

}
return 0 ;

}