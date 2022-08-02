#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int boundry = 0;
    int min;
    while (boundry < n)
    {
        min = boundry + 1;
        for (int i = boundry + 1; i < n; ++i)
        {
            if (arr[i] < arr[min])
            {
                min = i;
            }
        }
        // min,arr[boundry]
        int temp = arr[min];
        arr[min] = arr[boundry];
        arr[boundry] = temp;
        boundry++;
    }
}

void bubbleSort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
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

    // selectionSort(arr, n);
    bubbleSort(arr, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}