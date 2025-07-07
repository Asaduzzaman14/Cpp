#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int id;
    int math_marks, eng_marks;
};

bool compStudents(const Student &a, const Student &b)
{
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;
    if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;
    return a.id < b.id;
}

int main()
{
    int N;
    cin >> N;
    vector<Student> students(N);

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students.begin(), students.end(), compStudents);

    for (const auto &st : students)
    {
        cout << st.name << " " << st.cls << " "
             << st.section << " "
             << st.id << " "
             << st.math_marks << " "
             << st.eng_marks << "\n";
    }

    return 0;
}
