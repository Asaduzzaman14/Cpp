#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }

    int L = 0, R = n - 1;

    while (L < R)
    {
        char tmp = a[L].section;
        a[L].section = a[R].section;
        a[R].section = tmp;
        L++;
        R--;
    }

    for (const auto &st : a)

    {
        cout << st.name << " "
             << st.cls << " "
             << st.section << " "
             << st.id << "\n";
    }

    return 0;
}
