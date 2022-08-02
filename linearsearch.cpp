#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int k){
    int flag=0;
    for(int i=0 ; i<n ; ++i){
        if(arr[i]==k){
            flag=1;
            cout<< i+1;
        }
    }
    if(flag==0){
        cout<< -1;
    }
}

int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    int k; cin>>k;
    linearSearch(arr, n, k);
    
}