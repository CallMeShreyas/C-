#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int k){
    for (int i = 0; i < n;++i){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int k){
    int lo = 0, hi = n;
    while(lo<=hi){
        int mid = (lo + hi) / 2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }

    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    // cout << binarySearch(arr, n, k);
    cout << linearSearch(arr, n, k);
}