/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of votes: ";
    cin >> n;  // Input the number of votes (In this case, n = 5)

    int votes[n];  // Array to store the votes
    cout << "Enter the votes (candidate numbers): ";
    for (int i = 0; i < n; i++) {
        cin >> votes[i];  // Input votes (e.g., 2, 3, 2, 1, 2)
    }

    int numCandidates = 13;  // Assuming candidates are numbered 0 to 12
    int voteCount[13] = {0};  // Array to store vote counts for each candidate, initialized to 0

    // Count the votes for each candidate
    for (int i = 0; i < n; i++) {
        int candidate = votes[i];
        voteCount[candidate] += 1;  // Increment the vote count for the candidate
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;  // Number of queries

    while (q--) {
        int candidateNumber;
        cout << "Enter candidate number to query: ";
        cin >> candidateNumber;  // Input the candidate number to query
        
        // Output the number of votes for the queried candidate
        cout << "Candidate " << candidateNumber << " received " << voteCount[candidateNumber] << " votes." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main () {
    // Input the string
    string s;
    cout << "  the string " ;
    cin >> s;

    // Initialize a hash array to count frequency of each character (only lowercase a-z)
    int hash[26] = {0};

    // Calculate the frequency of each character in the string
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    // Query part
    int q;
    cout << "  the number of queries ";
    cin >> q;

    while (q--) {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}


#include<iostream>
#include<map>
using namespace std;

int main () {
    int n ;
    cin >> n ;
    int arr[n];
    for ( int i = 0 ; i< n  ; i++) {
        cin >> arr[i];
    }
    
    // precompute 
    map<int,int> mpp;
     for ( int i = 0 ; i< n  ; i++) {
        mpp[arr[i]]++;
    }

    //iterate in the map 
    for(auto it : mpp){
    cout << it.first << " -> " << it.second << endl;
    }


    int q ;
    cout << " enter the number of quirey : " ; 
    cin >> q;

    while(q--){
        int number ;
        cin >> number ;
        cout << mpp[number] <<endl;
    
    }
    return 0 ;
}
*/
#include<iostream>
#include<unordered_map>
using namespace std;

int main () {
    int n ;
    cin >> n ;
    int arr[n];
    for ( int i = 0 ; i< n  ; i++) {
        cin >> arr[i];
    }
    
    // precompute 
    unordered_map<int,int> mpp;
     for ( int i = 0 ; i< n  ; i++) {
        mpp[arr[i]]++;
    }

    //iterate in the map 
    for(auto it : mpp){
    cout << it.first << " -> " << it.second << endl;
    }


    int q ;
    cout << " enter the number of quirey : " ; 
    cin >> q;

    while(q--){
        int number ;
        cin >> number ;
        cout << mpp[number] <<endl;
    
    }
    return 0 ;
}
