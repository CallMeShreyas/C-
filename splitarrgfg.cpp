#include<bits/stdc++.h>
using namespace std;
// Split array int Two Parts and add first part to last GFG approach

void splitArr(int arr[], int n, int split){
    for(int i=0;i<split;++i){
        int temp=arr[0];
        for(int i=0;i<n;++i){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}

int main(){
    int n;  cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int split; cin>>split;

    splitArr(arr,n,split);

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}