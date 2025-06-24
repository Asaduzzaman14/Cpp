#include <iostream>
using namespace std;

struct Student {
    int id;
    char name[101];
    char section;
    int marks;
};

int main() {
    int Test;
    cin >> Test;

    while (Test--) {
        Student s[3];
        for (int i = 0; i < 3; i++) {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].marks;
        }

        int best = 0;
        for (int i = 1; i < 3; i++) {
            if (s[i].marks > s[best].marks ||
               (s[i].marks == s[best].marks && s[i].id < s[best].id)) {
                best = i;
            }
        }

        cout << s[best].id << " "
             << s[best].name << " "
             << s[best].section << " "
             << s[best].marks << "\n";
    }

    return 0;
}
