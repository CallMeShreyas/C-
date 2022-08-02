#include<bits/stdc++.h>
using namespace std;

void printDistinctFromArray(int arr[], int n){
    int temp[n];
    int k=0;
    for(int i=0;i<n;++i){
        temp[i]=0;
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i]==temp[j]){
                temp[k]=arr[i];
                k++;
            }
            else{
                
            }
        }
    }

    for(int i=0;i<n;++i){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    printDistinctFromArray(arr, n);
}