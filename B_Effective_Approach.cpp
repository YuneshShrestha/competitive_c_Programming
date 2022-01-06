#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, ct1 = 0, ct2 = 0;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    int b[100000];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
                ct1 = ct1 + j + 1;

            if (a[n - 1 - j] == b[i])
                ct2 = ct2 + j + 1;
        }
    }
    cout << ct1 << " " << ct2;
    return 0;
}
