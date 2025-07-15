//binary search working with iteration 

// #include<bits/stdc++.h>
// using namespace std;

// int binary_search(vector<int> & arr , int n , int target ){

//     int low = 0;
//     int high = n-1;

//     while ( low < high)
//     {
//         int mid = (low + high)/2;
//         if ( target == arr[mid] ) return mid;
//         else if ( target > arr[mid] ) low = mid + 1 ;
//         else high = mid -1 ;

//     }
//     return -1 ;
    
// }
// int main () {
//     vector<int> karan = {12,17,199,204,309};
//     int n = karan.size();
//     int target = 199;
//     cout << binary_search(karan,n,target);
// }

//recursive method for binary search 

#include<bits/stdc++.h>
using namespace std ;

int binary_search (vector<int> & arr , int low , int high , int target){

    while (low > high)
    {
        return -1;
    }
    int mid = ((low + high)/2);

    if ( target == arr[mid]) return mid;
    else if ( target > mid ) {
        binary_search(arr , mid +1 , high , target);
    }
    else {
        binary_search(arr , low , mid - 1 , target);
    }
    
}
int main () {
    vector<int> karan = {12,17,199,204,309};
    cout << binary_search(karan,0,karan.size()-1,1000);
}