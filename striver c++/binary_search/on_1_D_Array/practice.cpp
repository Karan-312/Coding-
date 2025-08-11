// #include<bits/stdc++.h>
// using namespace std ;

// int search(vector<int> arr , int n , int target ){
    
//     int low = 0 ;
//     int high = n - 1 ;
    

//     // while( low < high ){

//     //         int mid  =  ( high + low ) / 2 ;

//     //         if ( target < mid ) {

//     //             high = mid ;

//     //         }
//     //         else if ( target > mid ) {

//     //             low  = mid ; 

//     //         }
//     //         else if  ( target == mid ) { 

//     //             return mid;

//     //         }
//     // }

//     // return -1;

// }


// int main () {
//     vector<int> arr = {3,4,6,7,9,12,16,17};
//     int n = arr.size();
//     int target = 6 ;
//     cout << search(arr , n , target);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ;

// int search ( vector<int> & arr , int target , int low , int high){

//     if ( low > high ) return -1;
//     int mid = ( low + high ) / 2 ;
//     if ( target == arr[mid] ) return arr[mid];
//     else if ( target > arr[mid]) return search( arr , target , mid +1 , high);
//     else if ( target < arr[mid]) return search( arr , target , low , mid-1);
    
// }

// int binary_lengthing(vector<int> & arr , int n , int target ) {
//     return search(arr , target , 0, arr.size() - 1 );
// }

// int main () {
//     vector<int> arr = {3,4,6,7,9,12,16,17};
//     int n = arr.size();
//     int target = 6 ;
//     cout << binary_lengthing(arr , n , target);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std ;

int finding_smallest_index(vector<int> & arr , int n , int x){
//     // int index_count = 0 ;
// //     for( int i = 0 ; i < n ; i++ ){
// //         if ( arr[i] >= x ){
// //             return i;
// //             // break;
// //         }
// //     }
// //     return -1 ;
 //}
        int low = 0;
        int high = n-1;
 
    if ( low > high) return -1 ;
       
    int mid =( low + high ) / 2 ;  

    if ( x == arr[mid] ) return mid ;

    else if ( x > arr[mid] ) {
    for ( int i = mid +1  ; i < n ; i++) {
        if (arr[i] >= x ){
            return i ;
            }
        }
    }

    else if ( x < arr[mid] ){
        for (int i = mid  ; i > 0 ; i = i - 1 ) {
            if ( arr[i] >= x ) {
                return i ;
            }
        }
    } 
}

int main () {
    vector<int> arr = {1,2,3,3,6,8,9,9,9,11};
    int n = arr.size();
    cout << finding_smallest_index(arr , n , 4); 
    return 0 ;
}
