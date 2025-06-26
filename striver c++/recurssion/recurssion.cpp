/*//print from 1 to n ( without using f(i+1,n))
#include<iostream>
using namespace std;
int  n ;
int i ;
void fn ( ) {
    if(i<0){
        return ;
    }
    {
        cout << ( n - i) << " " ;
        i--;
        fn();
    }
}
int main () {
    cout <<  " the value of n is " << endl;
    
    cin >> n ;
    i = n -1 ;
    fn();
    return 0 ;
}

#include<iostream>
using namespace std;

void fn( int i,int  n ){
    if(i<1){
        return;
    }
    {fn(i-1,n);
    cout << i << " ";}
}
int main (){
    int  n ;
    cin  >>  n ;
    fn(n,n);
    return 0;
}

#include<iostream>// my code for sum 
using namespace std;
int sum = 0 ;
int i =  4 ;
int  fn(){

    if(i<1){
        
        cout << "  the final sum is ";
        return sum;
        }
        {
            sum = sum + i;
            cout << sum << " " ;
            i = i - 1 ;
            fn();

        }

}
int main () {
    fn();
    return 0 ;
}

#include<iostream>//parametrised way 
using namespace std;
 
     void fn(int i , int sum ){
        if(i < 1 ) {
            cout << "  the sum is " << sum  << endl;
            return ;
        }
        {
           
            fn( i-1 , sum + i);
        }
     }

     int main () {
        int n =  4 ;
        fn( n,0);
        return 0;

     }

#include<iostream>// functional way 
using namespace std;

int  fn ( int n ){
    if( n == 0){
        return 0;
    }
    {
        return ( n + fn(n-1) );
    }

}
int main () {
    int n ;
    cin >> n ;
    cout <<" the sum is " <<  fn(n);
}
#include<iostream> // functional way 
using namespace std;

int fn (int n ){
    if ( n == 0 ){
        return 1 ;
    }
    {
        return ( n * fn( n -1 ) );
    }

}
int main () {
    int n ;
    cout << " the valure of  n is ";
    cin >> n;
    cout << fn(n) ; 
}

#include <iostream>// parametric method
using namespace std;
 void fn(int n , int result) {
    if( n == 0 ){
        cout << " factorial is  : " << result << endl ;
        return;
    }
    fn (n-1 , result * n);

 }
 int main () {
    int n ;
   
    cout << "  the value of n is " ;
    cin >>  n ;
    fn(n,1);
    return 0 ;
 }

#include<iostream>
using namespace std;
 void fn(int arr[],int i=0 , int e=4 ){
    if(i >=e ){
        return;
    }
    {
        swap(arr[i],arr[e]);
        fn(arr,i+1,e-1);
    }
 }
 int main  (){
    int arr[5]={1,3,2,5,4} ;
    fn (arr);
    cout << " reversed array is " ;
    for(int i = 0 ; i< 5 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0 ;
 }
 
#include<iostream>
using namespace std;
void fn( int i , int arr[], int n ){
    if ( i  >= n/2){
        return;
    }
    {
        swap (arr[i] , arr[n-i-1]);
        fn (i+1,arr,n);
    }
} 
int main  () {
    int  n ;
    cout << "  the value of n " ;
    cin  >>  n ;
    int arr[n] ;

    for (int i = 0 ; i<n ;i++){
        cin >> arr[i];
    }

    fn (0,arr,n);

    for (int i  =0 ; i <n ; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;

    return 0;
}
*/
