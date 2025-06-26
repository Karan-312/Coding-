/*#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int>&arr, int n) {
      
      int largest = arr[0] ;

      for( int i = 0 ; i < n ; i++){
          if ( arr[i] > largest ){
            largest = arr[i]; 
           
            } 
            
    } return largest ;
}


int main () {

    vector<int>arr = { 54 ,3 , 32 , 4 ,4 };

    int n = arr.size() ;

    cout <<  " largest number " <<  largestElement(arr,n) << endl  ;

    return 0 ; 
}


// my way for question no2 .
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

    int largest = arr[n-1];
    int slargest = arr[n-2];

    for ( int i = n - 2 ; i >= 0 ; i-- ){

        if ( arr[i] != largest){
            slargest = arr[i];
            break;
        }
    }

}

int main  () {

    vector<int> arr = { 1,9,7,7,7};

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

// teachers way for question  nnumber 2 (brute force )

#include<iostream>
#include<vector>
#include<climits>


using namespace std;

int  secondlargest ( vector<int> & arr , int size ) {

    int n = arr.size();

    int largest = arr[0] ;
    int seconlargest = -1 ;
    
    for( int i = 0 ; i < n ; i++) {

        if ( arr[i] > largest) {
             
             seconlargest = largest ;
             largest = arr[i];
        }
        else if ( arr[i] < largest && arr[i] > seconlargest ) {
             seconlargest = arr[i];       
        } 
}

return seconlargest ;

}

int seconssmallest( vector<int>&arr , int size )  {
    int n = arr.size();

    int smallest = arr[0];
    int secondsmallest = INT_MAX;

    for ( int i = 0 ; i < n ; i++){
    if( arr[i] < smallest ){
       secondsmallest = smallest ;
       smallest = arr[i] ;
    }
    else if ( arr[i] != smallest && arr[i] < secondsmallest ){
        secondsmallest = arr[i];
    }
}
return secondsmallest ;
}
int main () {


    vector<int> arr = {32,4,23,1,3};

    int  n = arr.size();

    for ( int i = 0 ; i < n ; i++) {
        cout  << arr[i] << " " ;
     } 
     
     cout  <<  endl;

     cout << " " << secondlargest(arr,n);

     cout  <<  endl;

     cout << " " << seconssmallest(arr,n);


     return 0 ;
}

#include<iostream>
#include<vector>


using namespace std;



int removeDuplicates(vector<int> &arr, int n) {
    int i = 0 ;
for( int j = 0 ; j < n ; j++){
    if( arr[j] != arr[i]){
        
        arr[i+1] = arr[j];
        i++;

    }
}
return i+1;
}

int main() {
  vector<int> arr = {1,1,1,2,2,2,3,3};
  int n = arr.size();
  cout <<" original array: ";
  for( int i = 0 ; i < n ; i++){
  cout << arr[i] << " " ;
  }
  cout << removeDuplicates(arr,n);
  cout <<" now array is ";
  for( int i = 0 ; i < n ; i++){
    cout << arr[i] << " ";
  }
  return 0;
}



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateArray ( vector<int>& arr, int n) {
    
    int j = 1 ;
    for( int i = 0 ; i < n-1 ; i++){

        swap(arr[i],arr[j]);
        j++;
        
    }

}
int main (){

    vector<int> arr ={3,1,6,5,10,7,6,6,1,7};
    int n  = arr.size();
    for( int i = 0 ; i < n  ; i++){
        cout << arr[i]  <<" ";
    }
    cout << endl;

    rotateArray(arr,n);

    for( int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0 ;
}

// rotate in left (1st approach)
#include<iostream>
#include<vector>
using namespace std;

void shifting_d(vector<int> & arr , int n , int d ){

    d=d%n;

    int temp [d];
    for( int i = 0 ; i < d ; i++){
        temp[i] = arr[i];
    }

    for( int i = d ; i < n ; i++){
        arr[i-d] = arr[i];
    }

    for( int i = n-d  ; i < n ; i++){
        arr[i] = temp[i-(n-d) ];
    }

}
int main () {
    vector<int> arr = {7,5,2,11,2,43,1,1};
    int n = arr.size();
    int d = 3;

    shifting_d(arr,n,3);

    for( int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 
    return 0 ;
}
// best approach 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void left_rotate( int arr[] , int n , int d ) {

    d = d % n ;

    reverse( arr , arr+d );
    reverse( arr + d , arr + n );
    reverse( arr , arr+ n );

}

int main () {
    int n = 6 ;
    int arr[n] = { 1,2,3,4,5,6 };
    int d = 2;

    left_rotate( arr , n , d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    return 0 ;

    
}

// or a function for reversing in wriiten in copy 




// moving zeros to the end of the array
// first appraoch 

#include<iostream>
#include<vector>
using namespace std;

void zeros( vector<int> & arr , int n ) {

    vector <int> temp ;
    for ( int i = 0 ; i < n ; i++ ){
        if ( arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size();
    for ( int i = 0 ; i < nz ; i++) {
        arr[i] = temp[i];
    }

    for ( int i = nz ; i < n ; i++) {
        arr[i] = 0 ;
    }

    
}
int main () {

    vector<int> arr = {1,2,0,0,0,5,4,3,5,0,0,0};
    int n = arr.size();
    
    zeros(arr,n);

    for( int i = 0 ; i < n ; i++){
        cout << arr[i] ;
    }
    cout << endl;

    return 0;
}


// best approach 

#include <iostream>
using namespace std;

// Function to shift all zeros to the end
void shifting_zeros(int arr[], int n) {
    int j = -1; // 'j' will store the index of the first zero found

    // Step 1: Find the first zero in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;  // Store the first zero's index
            break;  // Exit the loop after finding the first zero
        }
    }

    // If no zeros are found, the array is already in the correct state
    if (j == -1) return;

    // Step 2: Swap non-zero elements forward while shifting zeros backward
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]); // Swap current non-zero element with the zero at 'j'
            j++; // Move 'j' to the next zero position
        }
    }
}

int main() {
    int arr[10] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1}; // Sample array
    int n = 10; // Size of the array

    // Calling the function to shift zeros
    shifting_zeros(arr, n);

    // Printing the modified array
    cout << "Array after shifting zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// Linear search 
#include<iostream>
using namespace std;

void finding (int arr [] , int n , int k  ){
    for (int i = 0; i < n; i++)
    {
              if(arr[i] == k) {
                cout << " the element is found " << endl;
              }
    }
    
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5 ;
    int k = 3 ; 
    finding(arr,5,3);
    return 0 ;
}


//union of two sorted array 
// brute force approach 

#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> doing_union(vector<int> &arr , vector<int> &arr1){
int n1 = arr.size();
int n2 = arr1.size();

set<int> st;
for (int i = 0; i < n1; i++)
{
    st.insert(arr[i]);
}
for (int i = 0; i < n2; i++)
{
    st.insert(arr1[i]);
}
vector<int> temp;
for (auto it : st)
{
    temp.push_back(it);
}
return temp;

}

int main () {
    vector<int> arr = { 1,2,3,4,5,5,6,4};
    vector<int> arr1 = { 1,2,3,4,5,};
    
    

    vector<int> result =  doing_union(arr,arr1);
    int n = result.size();

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " " ;
    }
    cout << endl;

    return 0;

    
    
    
}


best approach 
2nd method


#include<iostream>
#include<vector>
using namespace std;

vector<int> doing_union (vector<int> & arr1,vector<int> & arr2 ,int n1 , int n2 ){
    int i  = 0;
    int j =  0;
    vector<int> temp ;
    

    while (i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j]){
            if(temp.size()== 0 || temp.back() != arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(temp.size()== 0  || temp.back() != arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(temp.size()== 0  || temp.back() != arr1[i]){
            temp.push_back(arr1[i]);
        }
        i++;
    }
    while (j<n2)
    {
        if(temp.size()== 0 || temp.back() != arr2[j]){
            temp.push_back(arr2[j]);
        }
        j++;
    }
 
    return temp;
    
}

int main () {
    vector<int> arr1={1,1,2,3,4,5};
    vector<int> arr2={2,3,4,4,5,6,7,8};
    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> result = doing_union(arr1,arr2,n1,n2);
    int n = result.size();

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0 ;
    
} 

*/

//intersetion of tro arrays 