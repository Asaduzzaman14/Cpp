#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a;

    getline(cin, a);

    cout << a << endl;
    stringstream ss(a);
    string word;
    int count;
    while (ss >> word)
    {
        cout << word << endl;
        count++;
    }
    cout << count << endl;

    return 0;
}
