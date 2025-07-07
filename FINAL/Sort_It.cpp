#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int id;
    int math, eng;

    int total() const
    {
        return math + eng;
    }
};

bool compareStudents(const Student &A, const Student &B)
{
    if (A.total() != B.total())
        return A.total() > B.total();
    return A.id < B.id;
}

int main()
{
    int N;
    cin >> N;
    Student a[100];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].eng;
    }

    sort(a, a + N, compareStudents);

    for (int i = 0; i < N; i++)
    {
        cout << a[i].name << " "
             << a[i].cls << " "
             << a[i].section << " "
             << a[i].id << " "
             << a[i].math << " "
             << a[i].eng << "\n";
    }
    return 0;
}
