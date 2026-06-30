#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int runs = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                runs++;
            }
        }

        if (runs == 2) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}