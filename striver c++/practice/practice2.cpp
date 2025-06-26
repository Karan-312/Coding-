/*#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> & a , vector<int> & b ){
    int n1 = a.size();
    int n2 = b.size();
    
    vector<int> ans ;
    int vis[n2] = {0};

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(a[i] == b[j] && vis[j] == 0) {
                ans.push_back(a[i]);
                vis[j] = 1 ;
                break;
            }

            if(b[j] > a[i]) break;
        }
        
    }
    return ans ;
    
}
int main () {
    vector<int> a = { 1,2,2,3,3,4,5,6};
    vector<int> b = { 2,3,3,5,6,6,7};

    vector<int> result = intersection(a , b );
    int nzc = result.size();

    for(int i = 0 ; i < nzc; i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0 ;

}

//
#include<iostream>
#include<vector>
using namespace std;

int findingingmissing(int arr[] , int n ){
    int hash[n+1] ={0};

    for(int i = 0 ; i < n-1 ; i++) {
        
            hash[arr[i]]++;
        
    }
    for(int i  =0 ; i < n ; i++){
        if(hash[i] == 0){
            return i ;
        }
    }
    return -1;
} 
int main () {
    int n = 5;
    int  a[5] = {1,2,3,5};
    int ans = findingingmissing(a,n);
    cout << ans << endl;
    return 0 ;
}

#include<iostream>
#include<vector>

using namespace std ;

int findingmissing (int arr[]  , int n ){
    
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
            
        int sum = (n*(n+1)/2);
        return sum ;

    }

    int sum2 =0 ;
    int number ;

    for(int i = 0 ; i < n-1 ; i++){

        int sum2 = (n*(n+1)/2);

        int number = sum - sum2 ;

        
    }
sum2 += arr[i];
    return number ;
}
int main () {
    int n = 5;
    int  a[5] = {1,2,3,5};
    int ans = findingmissing(a,n);
    cout << ans << endl;
    return 0 ;
}

#include<iostream>
#include<vector>
using namespace std ;

int findingmissing (int arr[] , int n ){

    int sum1 = ((n*(n+1))/2);
    

    int sum = 0 ;

    for(int i = 0 ; i < n -1 ; i++) {
           sum = sum + arr[i];
    }

    int number = sum1 - sum ;
    return number ;
}

int main () {
    int n = 5;
    int  a[5] = {1,2,3,5};
    int ans = findingmissing(a,n);
    cout << ans << endl;
    return 0 ;
}

#include<bits/stdc++.h>
using namespace std ;

vector<int> findingintersection(vector<int> & arr , vector<int> & arr1 , int n1 , int n2 ){
    int i = 0 ;
    int j = 0;
    vector<int> temp ;
    while(i<n1 && j < n2 ){
        if(arr[i] < arr1[j]){
            i++;
        }else if(arr[i] > arr1[j]){
            j++;
        }
        else {
            temp.push_back(arr[i]);
            i++;
            j++;
        }
    }
    return temp ;
}
int main () {
    vector<int> arr =  {1,2,2,3,4,5,6,7};
    vector<int> arr1 = {1,2,3,4,5,6,7,8};
    int n1 = arr.size();
    int n2 = arr1.size();

    vector<int> result = findingintersection(arr,arr1,n1,n2);
    int n = result.size();

    for (int i = 0; i < n; i++)
    {
        cout << result[i]  << " ";
    }
    cout << endl ;

    return 0 ;
    
}

#include<bits/stdc++.h>
using namespace std ;

int findmissing (int arr[] , int n ) {
    int sum = (n*(n+1)/2);
    int sum1 = 0 ;

    for(int i  = 0 ; i < n - 1 ; i++ ){
        
         sum1 = sum1 + arr[i] ;

    }
    int number = sum - sum1 ;

    return number ; 

}
int main () {

    int n = 5 ;

    int arr[n] ={1,2,3,5};

    cout<< findmissing(arr , n);

    return 0 ;

}
*/
// #include<bits/stdc++.h>
// using namespace std ;

// int findmissing (int arr[] , int n ) {

// int xor1 = 0 ;

// int xor2 =0 ;

// for (int i = 0; i < n-1; i++)
// {
//     xor2 = xor2^ arr[i];
//     xor1 =xor1^ arr[i+1];
// }

// xor1 = xor1^ n;

// return (xor1 ^ xor2);


// }
// int main () {

//     int n = 5 ;

//     int arr[n] ={1,2,3,5};

//     cout<< findmissing(arr , n);

//     return 0 ;

// }
// #include<bits/stdc++.h>
// using namespace std ;

// int findingmostones(int arr[] , int n ) {

//     int count = 0 ;
//     int max_count = 0 ;
//     for(int i = 0 ; i < n ; i++) {
//         if( arr[i] == 1 ) {
//             count ++;
//             max_count = max(max_count , count) ;
//             }
//             else if ( arr[i] == 0) {
//                 count = 0;
//         }
        
//     }
//     return max_count;
// }
// int main  () {
//     int n  = 6;
//     int arr[n] ={1,0,1,1,0,1};

//     cout << findingmostones(arr , n );

//     return 0 ;
// }
/*
nclude<bits/stdc++.h>
using namespace std ;

void findingtempvalue( vector<int> & nums , int n ) {

    unordered_map <int,int> temp;
    
    for (int i = 0; i < n; i++)
    {
        temp[nums[i]] ++ ;
      
        
    }
    for (int i = 0; i < n; i++)
    {
        if(temp[nums[i]] == 1 ) {
            cout << nums[i] << endl;
        }
    }
    
}
int main () {

    vector<int> arr = {8};
    int n = arr.size() ;
 
    findingtempvalue(arr , n);

    return 0 ;
}


#include<bits/stdc++.h>
using namespace std ;

int getiinganswer(vector<int> & arr , int n ) {

    int xorr = 0 ;
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main () {

    vector<int> arr = {1,2,1,3,2,4,4};
    int n = arr.size() ;
 
   cout <<  getiinganswer(arr , n);

    return 0 ;
}

#include<bits/stdc++.h>
using namespace std ;

int findinglength (vector<int> & arr , int n , int l  ) {
    
    int length  = 0 ;

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            
            int sum = 0 ;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];

            }

            if( sum == l ){
                length = max( length , j-i + 1 );
            }
            

        }
        
    }
    return length;
    
}
int main  () {

    vector<int> arr = { 1,2,3,1,1,1,1,4,2,3 };
    int n = arr.size ();
    int l = 3 ;

    cout << findinglength(arr , n , l);

    return 0 ;

}
*/
// #include <iostream>
// #include <set>
// #include <vector>
// using namespace std;

// // Function to find the union of two arrays
// vector<int> findingunion(vector<int> &arr, vector<int> &arr1) {
//     set<int> st;  // Using a set to store unique elements

//     // Insert all elements of the first array into the set
//     for (int i = 0; i < arr.size(); i++) {
//         st.insert(arr[i]);
//     }

//     // Insert all elements of the second array into the set
//     for (int i = 0; i < arr1.size(); i++) {
//         st.insert(arr1[i]);
//     }

//     // Convert the set to a vector
//     vector<int> temp;
//     for (auto it : st) {
//         temp.push_back(it); // Copy each unique element into the vector
//     }

//     return temp; // Return the final union as a vector
// }

// int main() {
//     // Input vectors
//     vector<int> arr = {1, 1, 2, 3, 4, 5};
//     vector<int> arr1 = {2, 3, 4, 4, 5, 6};

//     // Call the function to find the union
//     vector<int> result = findingunion(arr, arr1);

//     int n = result.size(); // Store the size of the result vector

//     // Print the union elements
//     for (int num : result) {
//         cout << num << " ";
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std ;

// vector<int> findingunion(vector<int> & arr , vector<int> & arr1 ){

//     int n = arr.size();
//     int m = arr1.size();
//     int i  =0 ;
//     int j =0 ;

//     vector<int> temp ;

//     while( i< n && j<m ){
//         if(arr[i] <= arr1[j]){
//             if (temp.size() ==0 || temp.back() != arr[i]){
//                 temp.push_back(arr[i]);
//             }
//             i++;
//         }
//         else{
//             if(temp.size() ==0 || temp.back() != arr1[j]){
//                 temp.push_back(arr1[j]);
//             }
//             j++;
//         }
//     }
//     while (i<n){
//         if (temp.size() ==0 || temp.back() != arr[i]){
//             temp.push_back(arr[i]);
//         }
//         i++;
//     }
//     while( j<m){
//         if(temp.size() ==0 || temp.back() != arr1[j]){
//             temp.push_back(arr1[j]);
//         }
//         j++;
//     }
//     return temp;

// }
// int main  () {
//         vector<int> arr = {1, 1, 2, 3, 4, 5};
//         vector<int> arr1 = {2, 3, 4, 4, 5, 6};

//         vector<int> result = findingunion(arr , arr1);
//         int n = result.size();

//         for(int i = 0 ; i < n ; i++) {
//             cout << result[i] << " ";
//         }
//         return 0 ;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> intersection(vector<int> & arr , vector<int> & arr1 ){
//     int n = arr.size();
//     int m = arr1.size();
    
//     vector<int> temp;
//     int test[m] = {0};
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < m; j++)
//       {
//         if(arr[i] == arr1[j] && test[j] == 0 ){
//             temp.push_back(arr[i]);
//             test[j]=1;
//             break;
//         }
//         if(arr1[j] > arr[i]) break;
//       }
      
//     }
//     return temp;

// }
// int main (){
    
//         vector<int> arr = {1, 1, 2, 3, 4, 5};
//         vector<int> arr1 = {2, 3, 4, 4, 5, 6};

//         vector<int> result = intersection(arr , arr1);
//         int n = result.size();

//         for(int i = 0 ; i < n ; i++) {
//             cout << result[i] << " ";
//         }
//         return 0 ;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the intersection of two sorted arrays
// vector<int> intersection(vector<int> &arr, vector<int> &arr1) {
//     int n = arr.size();
//     int m = arr1.size();

//     int i = 0, j = 0; // Two pointers for both arrays
//     vector<int> temp; // Stores the intersection result

//     // Traverse both arrays using two-pointer technique
//     while (i < n && j < m) {
//         if (arr[i] < arr1[j]) {
//             i++; // Move pointer in arr if current element is smaller
//         } else if (arr[i] > arr1[j]) {
//             j++; // Move pointer in arr1 if current element is smaller
//         } else {
//             // If elements are equal, add to result and move both pointers
//             temp.push_back(arr[i]);
//             i++;
//             j++;
//         }
//     }
//     return temp; // Return the intersection array
// }

// int main() {
//     // Define two sorted input arrays
//     vector<int> arr = {1, 1, 2, 3, 4, 5};
//     vector<int> arr1 = {2, 3, 4, 4, 5, 6};

//     // Get the intersection of both arrays
//     vector<int> result = intersection(arr, arr1);

//     // Print the intersection result
//     for (int num : result) {
//         cout << num << " ";
//     }
    
//     return 0;
// }

// #include <bits/stdc++.h> 
// using namespace std;

// // Function to find the missing number in the given array
// int findingmissing(vector<int> &arr, int n) {

//     // Loop through the numbers from 0 to n-1
//     for (int i = 0; i < n; i++) {
//         int flag = 0; // Flag to check if the number exists in the array

//         // Check if 'i' exists in the array
//         for (int j = 0; j < n - 1; j++) {
//             if (arr[i] == arr[j]) { // If 'i' is found in the array
//                 flag = 1; // Mark it as found
//                 break; 
//             }
//         }

//         // If 'i' is not found in the array, return it as the missing number
//         if (flag == 0) return i;
//     }
//     return -1; // If no number is missing, return -1 (though this case may not occur)
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 5}; // Given array with a missing number
//     int n = arr.size(); // Get the size of the array

//     cout << findingmissing(arr, n); // Call the function and print the missing number
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the missing number in the given array
// int findingmissing(vector<int> &arr, int n) {
//     // Calculate the expected sum of the first 'n' natural numbers using the formula
//     it sum = (n * (n + 1)) / 2;

//     int sum1 = 0; // Variable to store the actual sum of elements in the array

//     // Calculate the sum of elements in the given array
//     for (int i = 0; i < n - 1; i++) {
//         sum1 = sum1 + arr[i];
//     }

//     // The missing number is the difference between the expected sum and actual sum
//     int result = sum - sum1;
//     return result;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 5}; // Given array with one missing number
//     int n = 5; // The total expected size (including the missing number)

//     cout << findingmissing(arr, n); // Call the function and print the missing number
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int findingmissing(vector<int> & arr , int n ){

//     int xor1 = 0;
//     for(int i = 0 ; i < n - 1  ; i++){
//         xor1 = xor1 ^ arr[i];
//     }
//     int xor2 = 0 ;
//     for(int i = 1 ; i <= n ; i++){
//         xor2 = xor2 ^ i;
//     }
//     int result = xor1^xor2;
//     return result;
// }
// int main() {
//     vector<int> arr = {1, 2, 3, 5}; // Given array with one missing number
//     int n = 5; // The total expected size (including the missing number)

//     cout << findingmissing(arr, n); // Call the function and print the missing number
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int findconones(vector<int> & arr , int n ){

//     int counter = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] == 1){
//             counter = counter + 1 ;
//         }
//         if(arr[i] == 0){
//             counter = 0;
//         }
//     }
//     return counter;
// } 

// int main (){
//     vector<int> arr = {1,0,1,1,0,1};
//     int n = arr.size();
//     cout << findconones(arr,n);
//     return 0 ;
// }
// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count = 0; // Initialize a counter to track consecutive 1s.
//         int maxcount = 0; // Initialize a variable to store the maximum count of consecutive 1s.
//         int n = nums.size(); // Get the size of the input vector.

//         for (int i = 0; i < n; i++) {
//             if (nums[i] == 1) {
//                 count++; // If the current element is 1, increment the count.
//             }
//             if (nums[i] == 0) {
//                 count = 0; // If the current element is 0, reset the count to 0, because the consecutive sequence of 1s is broken.
//             }
//             maxcount = max(maxcount, count); // Update maxcount with the maximum of the current maxcount and the current count.
//         }

//         return maxcount; // Return the maximum count of consecutive 1s found.
//     }
// };
// #include<bits/stdc++.h>
// using namespace std ;

// int findingmissing (vector<int> & arr , int n ){
//     int xor1 = 0 ;
//     int xor2 = 0 ;
//     for(int i = 0 ; i < n ;i++){
//         xor1 = xor1 ^ arr[i];
//         xor2 = xor2 ^ i;
//     }
//     xor2 = xor2 ^ n;
//     return ( xor1 ^ xor2 );
// }

// int main (){
//     vector<int> arr = {1,2,4,5};
//     int n = arr.size();
//     cout << findingmissing(arr,n);
//     return 0 ;b
// }




// #include<bits/stdc++.h>
// using namespace std;

// int findingmissing(vector<int> & arr , int n ){
//     int xor1 = 0;
//     int xor2 = 0;
//     for (int i = 0; i < n-1; i++)
//     {
//         xor1 = xor1 ^ arr[i];
        
//     }
//     for(int i = 0 ; i < n ; i++)
//     {
//         xor2 = xor2 ^ i;
//     }
//     xor2 = xor2 ^ n;

//     return(xor1^xor2);
    
// }
// int main() {
//     vector<int> arr = {1, 2, 3, 5}; // Given array with one missing number
//     int n = 5; // The total expected size (including the missing number)

//     cout << findingmissing(arr, n); // Call the function and print the missing number
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the missing number in an array of size n-1
// int findingmissing(vector<int> &arr, int n) {
//     int xor1 = 0; // Stores XOR of all elements in the given array
//     int xor2 = 0; // Stores XOR of all numbers from 1 to n

//     // XOR all elements in the given array
//     for (int i = 0; i < n - 1; i++) {
//         xor1 = xor1 ^ arr[i];
//     }

//     // XOR all numbers from 0 to n
//     for (int i = 0; i < n; i++) {
//         xor2 = xor2 ^ i;
//     }
//     xor2 = xor2 ^ n; // XOR with n as it was missing in the loop

//     // The missing number is found using XOR of both results
//     return (xor1 ^ xor2);
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 5}; // Given array with one missing number
//     int n = 5; // The total expected size (including the missing number)

//     cout << findingmissing(arr, n); // Call the function and print the missing number
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int findingone(vector<int> & arr , int n ){
//     int xor1 = 0 ;
//     for(int i = 0 ; i < n ; i++){
//        xor1 = xor1 ^ i;
//     }
//     int xor2 = 0 ;
//     for(int i = 0 ; i < n-1 ;i++ ){
//         xor2 = xor2 ^ arr[i];
//     }
//   return xor1^xor2;
// }
// int main (){
//     vector<int> arr = {3,0,1};
//     int n = 4;
//     cout <<findingone(arr,n);
//     return 0 ;
// }
// #include <bits/stdc++.h> // Includes all standard C++ libraries
// using namespace std;

// /**
//  * Function to find the unique number in an array.
//  * A number is considered unique if it appears only once.
//  * 
//  * @param arr - Reference to the input vector (array of integers)
//  * @param n - Size of the array
//  * @return The unique number if found, otherwise -1
//  */
// int findingsinglenum(vector<int> &arr, int n) {
//     map<int, int> mpp; // Create a map to store frequency of each number

//     // Step 1: Count occurrences of each number
//     for (int i = 0; i < n; i++) {
//         mpp[arr[i]]++; // Increase count for number arr[i]
//     }

//     // Step 2: Find the number that appears exactly once
//     for (auto it : mpp) { // Iterate through the map
//         if (it.second == 1) { // Check if frequency is 1
//             return it.first; // Return the unique number
//         }
//     }

//     return -1; // If no unique number is found
// }

// int main() {
//     vector<int> arr = {3, 5, 3, 5, 6}; // Example input array
//     int n = arr.size(); // Get the size of the array

//     // Call the function and print the unique number
//     cout << findingsinglenum(arr, n);

//     return 0;
// }

// #include <bits/stdc++.h> // Includes all standard libraries
// using namespace std;

// // Function to find the maximum length subarray with sum equal to 'm'
// int findingmaxlengthsubarrar(vector<int> arr, int n, int m) {
//     int len = 0; // Variable to store the maximum length of the subarray

//     // Iterate over all possible starting points of the subarray
//     for (int i = 0; i < n; i++) {
//         int sum = 0; // Initialize sum for the current subarray

//         // Iterate over all possible ending points of the subarray
//         for (int j = i; j < n; j++) {
//             sum = sum + arr[j]; // Add the current element to sum

//             // If the sum of the subarray equals 'm', update the maximum length
//             if (sum == m) {
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     return len; // Return the maximum length of the subarray found
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3}; // Input array
//     int n = arr.size(); // Size of the array
//     int m = 3; // Target sum

//     // Call the function and print the result
//     cout << findingmaxlengthsubarrar(arr, n, m);

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

//   vector<int> twoSum(vector<int>& nums, int target , int n) {

//     vector<int> temp ;
//     for(int i = 0 ; i < n ; i++){

//         for(int j = i+1 ; j <  n ; j++) {

//             if(nums[i]+nums[j] == target) {
//                 temp.push_back(i);
//                 temp.push_back(j);
//                 break;
//             }
           
//         }
//     }
//     return temp ;
// }
// int main () {
//     vector<int> nums =   {2,6,5,8,11};
//     int target = 14;
//     int n = nums.size();

//     vector<int> arr = twoSum(nums,target,n);
//     int t = arr.size();
//     for(int i = 0 ; i< t ; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0 ;
// }
/*
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target , int n){
    vector<int> temp;
    for(int i  = 0 ; i< n ; i++ ) {
        int sum =  0;
        for(int j = i + 1 ; j < n ; j++){
            sum = nums[i] + nums[j];
            if(sum == target){
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                break;

            }
        }
    }
    return temp;
}

int main () {

    vector<int> arr = {2,6,5,8,11};
    int n = arr.size();
    int target = 14 ;
    vector<int> result = twoSum(arr, target , n);
    int x = result.size();
    for(int i = 0 ; i < x; i++){
        cout << result[i] << " ";
    }
    return 0 ;

}

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target , int n){
unordered_map<int , int > valuestorage ;
vector<int> temp ;
for (int  i = 0; i < n; i++)
{
    valuestorage[arr[i]] = i;

    int something = target -arr[i] ;
    if(valuestorage.find(something) != valuestorage.end()){
        temp.push_back(valuestorage[something]);
        temp.push_back(i);
        break;
    } 
}
return temp ;

}

int main () {

    vector<int> arr = {2,6,5,8,11};
    int n = arr.size();
    int target = 14 ;
    vector<int> result = twoSum(arr, target , n);
    int x = result.size();
    for(int i = 0 ; i < x; i++){
        cout << result[i] << " ";
    }
    return 0 ;

}
*/
//
// #include<bits/stdc++.h>
// using namespace std ;

// int findingmax(vector<int> & arr , int n ) {
//     int count = 0 ;
//     for(int i = 0 ; i < n ; i++) {
//         if(arr[i] ==  arr[i+1]){
//             count ++;
//         }
//         else {
//             count == 0 ;
//         }
//         count = max (count ,  );
//     }
//     return count ;
// }
// int main (){
//     vector<int> arr = {4,4,2,4,3,4,4,3,2,4};
//     int n = arr.size();
//     cout << findingmax(arr , n );
//     return 0;

// }







// #include<bits/stdc++.h>
// using namespace std ;

// int findingmajority (vector<int> & arr , int n ){
    

//     int count = 0  ;
//     int element = -1 ;

//     for(int i = 0 ; i < n ; i++ ){
//         if(count == 0 ){
//             element = arr[i];
//             count = 1 ;
//         }
//         else if ( element == arr[i]){
//             count ++;
//         }
//         else {
//             count --;
//         }
//     }


//     int actualcount =  0 ;
//     for(int i = 0 ; i< n ; i++ ){
//      if(arr[i] == element){
//         actualcount ++ ;
//      }

//     }

//     if(actualcount > n/2){
//         return element;
//     }

//     return -1 ;
// }
// int main () {
//     vector<int> arr = {2,2,1,1,1,2,2};
//     int n = arr.size();
//     cout << findingmajority(arr,n);
//     return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v) {

//     //size of the given array:
//     int n = v.size();

//     //declaring a map:
//     map<int, int> mpp;

//     //storing the elements with its occurnce:
//     for (int i = 0; i < n; i++) {
//         mpp[v[i]]++;
//     }

//     //searching for the majority element:
//     for (auto it : mpp) {
//         if (it.second > (n / 2)) {
//             return it.first;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std ;

// vector<int> findingmaxprofit (vector<int> & arr , int n ){
//     vector<int> temp;
//     int maxprofit = 0 ;
//     int profit = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             profit = arr[j] - arr[i];
//             maxprofit = max(maxprofit , profit);
//         }
//         temp.push_back(maxprofit);
        
//     }
//     return temp;
    
// }
// int main (){
//     vector<int> arr = {7,6,4,3,1};
//     int n = arr.size();
//     vector<int> result = findingmaxprofit(arr,n);
//     int x = result.size();
//     for (int i = 0; i < x; i++)
//     {
//         cout << result[i] << " ";
//     }
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// // Function to find the maximum profit that can be achieved by 
// // buying and selling the stock at most once (Optimized O(n) solution)
// int findindmaxprofit(vector<int> &arr, int n) {

//     int maxi = 0;             // Stores the maximum profit found so far
//     int mini = INT_MAX;       // Stores the minimum price encountered so far

//     // Traverse through the array of prices
//     for (int i = 0; i < n; i++) {

//         // Update the minimum price so far
//         mini = min(mini, arr[i]);

//         // Calculate profit if we sell at current price and update max profit
//         maxi = max(maxi, arr[i] - mini);
//     }

//     // Return the maximum profit
//     return maxi;
// }

// int main() {
//     // Stock prices on different days
//     vector<int> arr = {7, 6, 5, 11, 2};
//     int n = arr.size();

//     // Output the maximum profit
//     cout << findindmaxprofit(arr, n);

//     return 0;
// }




// 
// #include<bits/stdc++.h>
// using namespace std;

// // Function to find the next lexicographically greater permutation
// vector<int> findindgnextpermutation(vector<int> &arr, int n) {
//     int index = -1;

//     // Step 1: Find the rightmost 'dip' where arr[i] < arr[i+1]
//     // This means the sequence is no longer increasing at this point from the end
//     // We are finding the first index (from the end) that breaks descending order
//     for (int i = n - 2; i >= 0; i--) {
//         if (arr[i] < arr[i + 1]) {
//             index = i;  // This is the "pivot" point
//             break;
//         }
//     }

//     // If no such index is found, the array is in descending order (last permutation)
//     // So we just reverse it to get the smallest (first) permutation
//     if (index == -1) {
//         reverse(arr.begin(), arr.end());
//         return arr;
//     }

//     // Step 2: Find the next greater element *from the right* of the index
//     // This ensures we're doing the minimal increase in permutation
//     // It works because the right side of the pivot is in descending order,
//     // so the first number from the end that is greater than arr[index]
//     // is the smallest possible number to swap with.
//     for (int i = n - 1; i >= 0; i--) {
//         if (arr[i] > arr[index]) {
//             swap(arr[i], arr[index]);  // Swap pivot with the next greater element
//             break;
//         }
//     }

//     // Step 3: Reverse the suffix (part after index) to get the next smallest permutation
//     // This works because the suffix was previously in descending order,
//     // and after the swap it's no longer valid — so we reverse it to make it ascending.
//     reverse(arr.begin() + index + 1, arr.end());

//     return arr;
// }

// int main() {
//     vector<int> arr = {2, 1, 5, 4, 3, 0, 0};  // You can change this for other test cases
//     int n = arr.size();

//     // Calling the function to get next permutation
//     vector<int> result = findindgnextpermutation(arr, n);

//     // Printing the modified array (arr is modified in place)
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the length of the longest sequence of consecutive elements
// int longestSuccessiveElements(vector<int>& a) {
//     int n = a.size();
//     if (n == 0) return 0; // Edge case: if array is empty, return 0

//     int longest = 1; // To store the final answer

//     unordered_set<int> st;
    
//     // Step 1: Insert all elements into a set
//     // This helps in O(1) average time complexity for lookup
//     for (int i = 0; i < n; i++) {
//         st.insert(a[i]);
//     }
// // 
//     // Step 2: Traverse through the set
//     for (auto it : st) {
//         // Check if 'it' is the start of a sequence
//         // A number is a starting point only if (it - 1) is NOT in the set
//         if (st.find(it - 1) == st.end()) {
//             // 'it' is a potential starting number
//             int cnt = 1;     // count the length of the sequence
//             int x = it;      // current number in the streak

//             // Check for consecutive numbers (x+1, x+2, x+3...) in the set
//             while (st.find(x + 1) != st.end()) {
//                 x = x + 1;   // move to the next number
//                 cnt = cnt + 1; // increment count for each consecutive number
//             }

//             // Update the longest streak length found so far
//             longest = max(longest, cnt);
//         }
//     }

//     return longest; // Return the final result
// }

// int main() {
//     // Sample input
//     vector<int> a = {100, 200, 1, 2, 3, 4};

//     // Call the function
//     int ans = longestSuccessiveElements(a);

//     // Print the result
//     cout << "The longest consecutive sequence is " << ans << "\n";

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find total number of subarrays whose sum equals k
// int findingsubarraysumtoal(vector<int>& arr, int n, int k) {
//     // We use a map to store the frequency of prefix sums
//     unordered_map<int, int> map;

//     // Initially, sum = 0 has occurred once. This helps us count subarrays starting from index 0.
//     map[0] = 1;

//     int count = 0; // To store the total number of valid subarrays
//     int sum = 0;   // This will keep track of the current prefix sum

//     for (int i = 0; i < n; i++) {
//         // Add current element to prefix sum
//         sum = sum + arr[i];

//         // Calculate the remaining value we need (sum - k)
//         int rem = sum - k;

//         // Now check if this rem value has occurred before
//         // If it has, it means there's a subarray ending at current index with sum = k
//         // We add how many times rem has occurred to the count
//         if (map.find(rem) != map.end()) {
//             count = count + map[rem]; // You struggled here — this is just: count += frequency of (sum - k)
//         }

//         // Update the frequency of the current sum in the map
//         // You also struggled here — this means:
//         // if sum already exists, increase its count by 1
//         // if not, it will be initialized to 0 and then increased to 1
//         map[sum]++;
//     }

//     return count; // Total subarrays found whose sum = k
// }

// int main() {
//     vector<int> arr = {3, 1, 2, 4}; // Input array
//     int n = arr.size();            // Size of the array
//     int k = 6;                     // Target sum we are looking for

//     // Call the function and print the result
//     cout << findingsubarraysumtoal(arr, n, k);
//     return 0;
// }

// #include <bits/stdc++.h> // Includes most standard libraries in C++, like iostream, vector, algorithm, etc.
// using namespace std;

// // Function to find a value from Pascal's Triangle or the number of unique paths in a grid
// int findingsomethingice(int r, int c) {
//     // Since we're using 1-based indexing, subtract 1 from both r and c to convert to 0-based indexing
//     r--;
//     c--;

//     // Initialize the result (product) as 1. This will store the final computed value.
//     int product = 1;

//     // This loop is calculating nCr (binomial coefficient)
//     // In this context: (r)C(c), which is equivalent to (r choose c)
//     // The formula is: C(n, r) = n! / (r! * (n - r)!)
//     // We use an optimized method to avoid overflow and reduce computation
//     for (int i = 0; i < c; i++) {
//         product = product * (r - i); // Multiply numerator term (r - i)
//         product = product / (i + 1); // Divide by denominator term (i + 1)
//     }

//     // Return the computed value
//     return product;
// }

// int main() {
//     int r;

//     // Prompt the user to enter the row number (1-based indexing)
//     cout << "Enter the value of row here: ";
//     cin >> r;

//     int c;

//     // Prompt the user to enter the column number (1-based indexing)
//     cout << "Enter the value of column here: ";
//     cin >> c;

//     // Output the final result
//     cout << "Here is your required number according to 1-based indexing: " 
//          << findingsomethingice(r, c);

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int individualcoloumnvalue (int n , int r){
   
//     long long product = 1 ;
//     for (int i = 0; i < r; i++)
//     {
//         product = product*(n-i);
//         product = product/(i+1);
//     }
    
// return product;
// }


// void putiingcolomnstogethertogetrowblahblahblahblah(int r ){
//     r --;
//     for (int  c = 0; c <=r; c++)
//     {
//         cout << individualcoloumnvalue(r,c)<<" ";
//     }
//     cout << endl;

// }




// int main () {
//     int r ;
//     cout << " enter the value of row you want to print ( 1 based indexing ) :";
//     cin  >> r;
//     putiingcolomnstogethertogetrowblahblahblahblah(r);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int uluulul(int n , int r ){
//     long long prodcut = 1 ;
//     for (int i = 0; i < r; i++)
//     {
//         prodcut = prodcut*(n-i);
//         prodcut = prodcut/(i+1);
//     }
//     return prodcut;
    
// }
// void printrows(int r ){
//     r--;
//     for (int c = 0; c <=r ; c++)
//     {
//         cout <<uluulul(r,c) << " ";
//     }
//     cout << endl;
    
// }
// void printingwholepascal(int n){

//     for (int r = 0; r <= n ; r++)
//     {
//         printrows(r) ;
//     }
//     cout << endl;
    
// }

// int main () {
//     int n ;
//     cout << " enter the value of pascal triangle to print ( 1 based indexing ) :";
//     cin  >> n;
//     printingwholepascal(n);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std ;
// vector<int>  fingdingcount (vector<int> & arr , int n ){
// vector<int> temp;

// for (int  i = 0; i < n; i++)
// { int count = 0 ;
//     for (int j = i; j < n; j++)
//     {
//         if(arr[i] == arr[j]){
//             count ++;
//         }
//         }
//         if(count > n/3){
//             temp.push_back(arr[i]);
//         }
//     }
//     return temp;
// }


// int main () {
//     vector<int> arr = {11,13,11,13,13,11};
//     int n = arr.size();
//     vector<int>  result = fingdingcount(arr,n);
//     int x = result.size();
//     for (int  i = 0; i < x; i++)
//     {
//         cout << result[i] << " "; 
//     }
    
//     return 0 ;
// }
// #include<bits/stdc++.h>
// using namespace std ;

// vector<int> majorityelement(vector<int> & arr , int n ){
//     unordered_map<int,int> hashmpp;
//     vector<int> temp ;
//     int min = ((n/3)+1);
//     for (int i = 0; i < n; i++)
//     {
//         hashmpp[arr[i]]++;
//         if(hashmpp[arr[i]] == min){
//             temp.push_back(arr[i]);
//         }
//         if(temp.size() == 2 ){
//             break;
//         }
//     }
//     sort(temp.begin(),temp.end());
//     return temp;
// }
// int main () {
//     vector<int> arr = {11,13,11,13,13,11};
//     int n = arr.size();
//     vector<int>  result = majorityelement(arr,n);
//     int x = result.size();
//     for (int  i = 0; i < x; i++)
//     {
//         cout << result[i] << " "; 
//     }
    
//     return 0 ;
// }
// #include<bits/stdc++.h>
// using namespace std ;

// vector<int> majorityelement(vector<int> & arr , int n ){
//     int ele1 = -1 ;
//     int count1= 0;
//     int ele2 =-1 ;
//     int count2 = 0 ;
//     vector<int> temp ;
//     for (int i = 0; i < n; i++)
//     {
//         if(count1 ==  0 && arr[i] != ele2){
//             ele1 = arr[i];
//             count1 = 1 ;
//         }
//         else if (count2 == 0  && arr[i] != ele1){
//             ele2 = arr[i];
//             count2 = 1 ;
//         }
//         else if (arr[i] == ele1){
//             count1++;
//         }
//         else if ( arr[i] == ele2){
//             count2++;
//         }
//         else{
//             count1--;
//             count2--;
//         }
//     }
//       int actualcount1 =  0 ;
//       int actualcount2 = 0 ;
//       for (int i = 0; i < n; i++)
//       {
//         if(arr[i] == ele1){
//             actualcount1++;
//         }
//         else if (arr[i] ==ele2){
//             actualcount2++;
//         }
//       }
//       if(actualcount1 > n/3){
//         temp.push_back(ele1);
//       }
//        if (actualcount2 > n/3){
//         temp.push_back(ele2);
//       }
      
//       return temp ;
//     }
    
 
    

// int main () {
//     vector<int> arr = {11,13,11,13,13,11};
//     int n = arr.size();
//     vector<int>  result = majorityelement(arr,n);
//     int x = result.size();
//     for (int  i = 0; i < x; i++)
//     {
//         cout << result[i] << " "; 
//     }
    
//     return 0 ;
// }







//--------------------------------------------------------------------------******************************************-----------------------------------
// #include<bits/stdc++.h>
// using namespace std ;
// vector<int> majorityelement(vector<int> & arr  , int n ){
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         int counter = 0 ;
//         for (int j  = 0; j < n; j++)
//         {
//             if(arr[i] == arr[j]){
//                 counter++;
//             }
//         }
//         if(counter > n/3 && find(temp.begin() , temp.end() , arr[i]) == temp.end() ){
//             temp.push_back(arr[i]);
//         }

//         if(temp.size() == 2){
//             break;
//         }
//     }
//     return temp;

// }
// int main () {
//     vector<int> arr = {11,33,11,33,11,33};
//     int n = arr.size();
//     vector<int> result = majorityelement(arr,n);
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     return 0 ;
// }
//----------------------------------------------------------*************************************************-------------------------
/*#include<bits/stdc++.h>
using namespace std ;

vector<int> majorityelement(vector<int> & arr , int n ){
    vector<int> temp ;
    unordered_map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second > (n/3) && find(temp.begin() , temp.end() , it.first) == temp.end()){
              temp.push_back(it.first);
        }
        if(temp.size() == 2 ){
            break;
        }
    }
   
    sort(temp.begin() , temp.end());
    return temp;
}
int main () {
    vector<int> arr = {11,33,11,33,11,33};
    int n = arr.size();
    vector<int> result = majorityelement(arr,n);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0 ;
}


*/
#include<bits/stdc++.h>
using namespace std ;

vector<int> rotatingleftbyone(vector<int> & arr , int n ) {
    
    vector<int> temp;
    for (int i = 0; i < n; i++){
      temp.push_back(arr[])
    }
}
int main () {
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    rotatingleftbyone(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0 ; 
}