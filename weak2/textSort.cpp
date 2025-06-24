#include <bits/stdc++.h>
using namespace std;

string getSortedAll(string str)
{
    string result = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            result += str[i];
        }
    }

    sort(result.begin(), result.end());

    return result;
}

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    string result1 = getSortedAll(a); 
    string result2 = getSortedAll(b);  

    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}
