#include<bits/stdc++.h>
using namespace std;

void bs(vector<int>& arr, int x){
    int l = 0;
    int r = arr.size() - 1;
    while(l<=r){
        int mid = (l + r) / 2;
        if(x==arr[mid]){
            cout << mid;
            break;
        }
        else if(x<arr[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
}

int main(){
    // vector<int> arr = {1, 2, 3, 4, 5, 6};
    // int x = 5;
    vector<int> arr;
    int n,temp;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> temp;
        arr.push_back(temp);
    }
    int x;
    cin >> x;
    bs(arr, x);
}