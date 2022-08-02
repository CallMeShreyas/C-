#include <bits/stdc++.h>
using namespace std;
// Split array int Two Parts and add first part to last
void reArrange(int arr[], int n, int split){
    int temp[split];
    for(int i=0;i<split;++i){
        temp[i]=arr[i];
    }
    int ct=0;
    for(int i=split;i<n;++i){
        arr[ct]=arr[i];
        ct++;
    }
    int pt=0;
    for(int i=(n-split);i<n;++i){
        arr[i]=temp[pt];
        pt++;
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int split;
    cin>>split;

    reArrange(arr,n,split);

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

}
