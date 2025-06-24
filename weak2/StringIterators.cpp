#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "hello world";

    // for (int i = 0; i < s.size(); i++)
    // {

    //     cout << s[i] << endl;
    // }

    // 2
    // for (string::iterator it = s.begin(); it < s.end(); it++)
    // {

    //     cout << *it << endl;
    // }

    for (auto it = s.begin(); it < s.end(); it++)
    {

        cout << *it << endl;
    }

    return 0;
}