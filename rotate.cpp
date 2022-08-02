#include<bits/stdc++.h>
using namespace std;

void arrayrotate(int arr[], int n, int d){

    int temp[d];
    for(int i=0;i<d;++i){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;++i){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;++i){
        arr[n-d+i]=temp[i];
    }

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

}

void rotateEach(int arr[], int n, int d){
    int temp;
    for(int j=0;j<d;++j){
        temp=arr[0];
        for(int i=0;i<n;++i){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}

void rotateByTemp(int arr[], int n, int d){
    int temp[n];
    int k=0;

    for(int i=d;i<n;++i){
        temp[k]=arr[i];
        k++;
    }
    for(int i=0;i<d;++i){
        temp[k]=arr[i];
        k++;
    }
    for(int i=0;i<n;++i){
        arr[i]=temp[i];
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    int d; cin>>d;

    // arrayrotate(arr, n, d);
    // rotateEach(arr, n, d);
    rotateByTemp(arr, n, d);

}