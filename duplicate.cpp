#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 1, ct = 0;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            if (A[j] == A[i] && i != j)
            {
                // cout << "Duplicate Found";
                ct++;
                flag = 0;
                break;
            }
        }
    }

    if (ct > 0)
    {
        cout << "Duplicate Found ";
    }

    if (flag == 1)
    {
        cout << "Duplicate Not Found";
    }
}