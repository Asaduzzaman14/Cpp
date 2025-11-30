#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l(10, 4);

    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }

    cout << *l.begin() << endl;

    return 0;
}
