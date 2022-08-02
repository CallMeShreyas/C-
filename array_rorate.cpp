#include <bits/stdc++.h>
using namespace std;
// Array rotation clockwise

void rotateArray(int arr[], int n, int k)
{
    int ct = k;
    while (ct != 0)
    {
        int temp = arr[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
        ct--;
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

    int k;
    cin >> k;

    rotateArray(arr, n, k);

    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
}