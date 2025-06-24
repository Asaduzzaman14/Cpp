
#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jerrsey;
    Cricketer(string country, int jerrsey)
    {
        this->country = country;
        this->jerrsey = jerrsey;
    };
};

int main()
{
    Cricketer *sakib = new Cricketer("bd", 101);
    Cricketer *mahadi = new Cricketer("us", 12);

    *sakib = *mahadi;

    delete mahadi;

    cout << sakib->country << " " << sakib->jerrsey << endl;
    return 0;
}
