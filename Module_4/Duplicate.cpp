#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    unordered_set<long long> seen;

    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if (seen.count(a))
        {
            cout << "YES\n";
            return 0;
        }
        seen.insert(a);
    }

    cout << "NO\n";
    return 0;
}