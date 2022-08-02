#include <bits/stdc++.h>
using namespace std;

void getminmax(int arr[], int n, int *min, int *max)
{
    for (int i = 1; i < 5; ++i)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int arr[5];
    // int min = arr[0];
    // int max = arr[0];
    // getminmax(arr, 5, &min, &max);
    // cout << "Min : " << min << endl;
    // cout << "Max : " << max;

    for (int i = 0; i < 5;++i){
        cin >> *(arr + i);
    }
    for (int i = 0; i < 5;++i){
        cout << *(arr + i) << endl;
    }
}