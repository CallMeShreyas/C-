// rearrange array such that arr[i]=i

#include <bits/stdc++.h>
using namespace std;

void reArrange(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= 0)
        {
            int temp = arr[i];
            int t=arr[temp];
            arr[temp]=temp;
            arr[i]=arr[temp];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    reArrange(arr, n);

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}