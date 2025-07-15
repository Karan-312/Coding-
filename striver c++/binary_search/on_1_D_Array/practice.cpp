#include<bits/stdc++.h>
using namespace std;

int binary_search ( vector<int> & arr , int low , int high , int target){

while ( low > high)
{

    return -1 ;
}

int mid = ( low + high )/2;

if ( target == mid ){ return mid };
else if ( target > mid ) binary_function( arr , mid + 1 , high, target );
else binary_function(arr,low,mid-1,target);

return -1;
}

int main () {
    vector<int> arr = [12,]
    cout << binary_function()
}
