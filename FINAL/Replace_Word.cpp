#include <iostream>
#include <string>
using namespace std;

string replaceAll(string s, string x)
{
    int pos = s.find(x);
    while (pos != -1)
    {
        s.replace(pos, x.length(), "#");
        pos = s.find(x, pos + 1);
    }
    return s;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string S, X;
        cin >> S >> X;

        string result = replaceAll(S, X);
        cout << result << endl;
    }

    return 0;
}
