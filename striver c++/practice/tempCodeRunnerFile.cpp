#include<bits/stdc++.h>
using namespace std;

vector<int> majorityelement(vector<int> &arr, int n) {
    vector<int> temp;
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for (auto it : mpp) {
        if (it.second > (n / 3) && find(temp.begin(), temp.end(), it.first) == temp.end()) {
            temp.push_back(it.first);
        }
    }
    return temp;
}

int main() {
    vector<int> arr = {11, 33, 11, 33, 11, 33};
    int n = arr.size();
    vector<int> result = majorityelement(arr, n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}



