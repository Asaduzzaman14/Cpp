#include <bits/stdc++.h>
using namespace std;

int main() {
    int Test;
    cin >> Test;

    while (Test--) {
        int N, Total;
        cin >> N >> Total;
        int A[N];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        bool found = false;
         for (int i = 0; i < N - 2; i++) {
            for (int j = i + 1; j < N - 1; j++) {
                for (int k = j + 1; k < N; k++) {
                    if (A[i] + A[j] + A[k] == Total) {
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}