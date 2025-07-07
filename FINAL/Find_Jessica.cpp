#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    size_t start = 0;
    while (start < s.size())
    {
        size_t spacePos = s.find(' ', start);
        string word;
        if (spacePos == string::npos)
        {
            word = s.substr(start);
        }
        else
        {
            word = s.substr(start, spacePos - start);
        }

        if (word == "Jessica")
        {
            cout << "YES\n";
            return 0;
        }

        if (spacePos == string::npos)
            break;
        start = spacePos + 1;
    }

    cout << "NO\n";
    return 0;
}
