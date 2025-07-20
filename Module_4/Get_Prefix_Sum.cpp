#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<long long> a(n), sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (i == 0)
        {
            sum[0] = a[0];
        }
        else
        {
            sum[i] = sum[i - 1] + a[i];
        }
    };
    sort(sum.begin(), sum.end(), greater<long long>());

    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << " ";
    }

    return 0;
}