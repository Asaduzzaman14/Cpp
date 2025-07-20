#include <bits/stdc++.h>
using namespace std;

bool isSortedAsc(const vector<int> &a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] < a[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;

        vector<int> arr(num);

        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }

        if (isSortedAsc(arr))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
