
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int role, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    };
    void total()
    {
        cout << "total marks of " << name << " = " << math + english << endl;
    };
};

int main()
{
    Student sakib("sakib", 01, 99, 88);
    sakib.total();

    Student rakib("rakib", 24, 33, 44);
    rakib.total();

    return 0;
}