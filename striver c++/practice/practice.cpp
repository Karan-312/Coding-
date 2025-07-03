/*(#include<iostream>
using namespace std;

int main () {
    int n ;
    cout << "enter the value of size of array " ;
    cin >> n ;
    int arr[n];
    cout <<  " eneter the elements of the array ";
    for (int i =0 ; i < n ;i++) { 
        cin >> arr[i];
    } 
    cout <<" the printed array is ";
    for ( int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }

    int hash[13] = {0};

    for ( int i = 0; i < n ; i++) {
        int numener = arr[i];
        hash[numener] += 1 ;
    }

    int q ;
    cout << " enter the number of quiries " ;
    cin >> q ;

    while(q--) {
        int numberrep;
        cout << " enter the repetation of number you want to find out ";
        cin >> numberrep ; 

        cout << " number is :" << numberrep << " its number of repetation is " << hash[numberrep] << endl ; 

    }
    return 0 ;
}

#include<iostream>
using namespace std ;
 

void selectionsort( int arr[] , int n  ){

    for ( int i = 0 ; i <= n - 2 ; i++) {

        int minindex = i ;
        
        for( int j = i+1 ; j < n ; j++) {
            if(arr[j] < arr[minindex]){
                minindex =j;
            }
        }
        int temp = arr[minindex] ;
        arr[minindex] = arr[i];
        arr[i] = temp ; 
   }
}

int main () {

    int n ;
    cin >>  n ;
    int arr[n] ;

    for( int i = 0 ; i< n ; i++) {
        cin >> arr[i] ;
    }
    selectionsort(arr,n);
    for ( int i = 0 ;i < n ; i++) {
        cout << arr[i] <<" ";

    }
    
    return 0;
}

#include<iostream>
using namespace std;

void bubblesort( int arr[] ,  int n ){
    
    for( int i = 0 ; i< n -1 ; i++) {

        for( int j = 0 ; j<n-i-1 ; j++){

            if( arr[j] > arr[j+1]){
                int temp = arr[j] ;
                 arr[j] = arr[j+1];
                 arr[j+1] = temp ;
            }
        }
    }
}

int main (){
    int n ;
    cin>> n ;
    int arr[n] ;

    for( int i = 0 ; i < n ; i++){
        cin >> arr[n] ;

    }
    bubblesort(arr,n);

    for(  int i = 0 ; i< n ; i++) {
        cout << arr[n] ;
    }
    return 0 ;
}

#include<iostream>
#include<vector>

using namespace std ;

void merge ( vector<int>& arr , int low , int mid , int high ) {

    vector<int> temp ;

    int left = low , right = mid + 1 ;

    while ( left <= mid && right <= high) {

        if(arr[left] <= arr[right]) {

            temp.push_back(arr[left]) ;
            left++;
        }
        else {

            temp.push_back(arr[right]);
            right++;

        }
    }

    while( left <= mid ) {

        temp.push_back(arr[left]);
        left++;

    }

    while( right <= high ) {

        temp.push_back(arr[right]);
        right++;

    }

    for ( int i = low ; i <= high ; i++ ){
        arr[i] =  temp [i-low] ;
    }
}

void Ms( vector<int>&arr , int low , int high ) {

    if( low >= high){
        return;
    }
    int mid = (low + high)/2 ;
    Ms(arr,low,mid);
    Ms(arr,mid+1,high);
    merge(arr,low,mid,high);
} 

void mergesort(vector <int> & arr , int n) {
    Ms(arr , 0 , n-1 );
}

int main () {

    vector<int> arr = { 38 , 27 , 43 , 3 , 9 , 82 , 10 };

    int n = arr.size();

    cout << " orginial array " ;
    for( int i = 0 ; i < n ; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    mergesort(arr ,  n);

    cout << " sorted array ";
    for( int i = 0 ; i< n ; i++) {
        cout << arr[i] << " ";

    }
    cout <<  endl ;

    return 0 ;
}

#include<iostream>
#include<vector>

using namespace std;

void merge ( vector<int>&arr , int low , int mid , int high){

    vector<int> temp ;

    int left = low , right = mid + 1 ;

    while( left <= mid && right <= high) {

    if( arr[left] <= arr[right] ){

        temp.push_back(arr[left]);
        left++;
    }
    else{

        temp.push_back(arr[right]);
        right++;

    }
    }
    while( left <= mid ) {

    temp.push_back(arr[left]);

    left++;

    }
    while( right <= high) {

    temp.push_back(arr[right]);

    right++;

    }
    for( int i = low ; i <=high ; i++) {

        arr[i] = temp[i - low];

    }
}

void Ms( vector<int> & arr , int low  ,  int high ){

    if( low >= high) {
        return ;
    }
    int mid = ( low + high ) / 2 ;
    Ms(arr,low,mid);
    Ms(arr,mid+1,high);
    merge(arr,low,mid,high);

}

void mergesort(vector<int>&arr, int n){
    Ms(arr, 0 , n-1);
}

int main () {

    vector<int> arr = {38 , 27 , 43 , 3 , 9 , 82 , 10 };

    int n = arr.size();

    cout <<"orginal array ";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";

    }
    cout << endl;

    mergesort(arr , n );

    cout << " sorted array ";
    for( int i = 0 ; i<n ; i++) {
        cout <<arr[i] <<" ";
    }
    cout << endl;
    return 0 ;
}

#include<iostream>
#include<vector>

using namespace std ;

void partition ( vector<int>& arr  , int low , int high) {

         int pivot = arr[low] ;
         int low = i ;
         int high = j ;

         

            while ( arr[ i ] >= pivot && i <=high - 1 ) {
                i++;
            }

            while ( arr[ j ] <= pivot &&  j > low + 1  ) {
                j--;
            }
            if( i < j ) {
                swap( arr[i] , arr [j] );
            }
         
         swap( arr[low] , arr[j] );
         return j ;
         }
        


void qs( vector<int> & arr , int low , int high ) {
 
    if ( low < high) {
    int pIndex = partition ( arr , low , high );
    qs ( arr , low , pIndex -1 );
    qs ( arr , pIndex + 1 , high ) ;
}
}

void quicksort( vector<int> & arr , int low , int high){

    qs( arr , 0 , arr.size() - 1 ) ;
}

return 0;

#include<iostream>
#include<vector>
using namespace std;


int partition( vector<int>&arr , int low  , int high) {
    
    int pivot = arr[low] ;
    int i = low ;
    int j = high ;
    

    while( i < j ) {

        while ( arr[i] <=  pivot && i <= high -1 ){
            i++;
        }
        while ( arr[j] > pivot && j >=low + 1 ){
            j--;
        }
        if( i < j ) swap(arr[i] , arr[j]) ;
        

    }
    swap ( arr[low] , arr[j] );
    return j ;
}


void qs( vector<int> &arr , int low , int high) {

    if ( low < high) {
         
        int inpar = partition(arr,low,high);
        qs(arr , low , inpar-1);
        qs(arr, inpar + 1 , high) ;
    }
}


void quicksort( vector<int>&arr , int size ){
    qs (arr , 0 , arr.size() - 1);
}

int finalsort ( vector <int> &arr , int size ){

    int n = arr.size() ;

    cout << arr[ n-2 ] <<" " << endl;
    int i  = 0 ;
    cout << arr[ i + 1 ] <<" " << endl;

}

int main  () {

    vector<int> arr = { 4,5,3,6,7};

    int n = arr.size();

    cout << " original array " ;
    for ( int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort( arr , n ) ;

    cout << " sorted array   " ;
    for ( int i =0 ; i<n ; i++) {
        cout << arr[i] << " ";

    }
    cout  << endl ;
    finalsort (arr,n);

    return 0 ; 
    }

#include<iostream>
#include<vector>
using namespace std ;

int largestelemet( vector<int>& arr , int n ){

    int largest = arr[0] ;

    for( int i = 0 ; i < n ; i++) {

        if ( arr[i] > largest) {

            largest = arr[i];

        }

    }

    return largest ;

}

int main () {

    vector<int> arr = { 10 , 19 , 3, 5 ,17} ;

    int n = arr.size() ;

    cout << largestelemet ( arr , n ) ;
    
    return 0 ; 

}
*/
#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { // If the current element is smaller than the pivot
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Swap the pivot element to its correct position
    return i + 1;
}

// Recursive QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Sort the left half
        quickSort(arr, pi + 1, high); // Sort the right half
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
int main (
    booelan __cpp_aggregate_nsdmi ( " ui design deligations ") // yeah its just bullshit 
)