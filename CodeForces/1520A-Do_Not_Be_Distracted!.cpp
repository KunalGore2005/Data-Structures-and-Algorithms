#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> seen;
        bool valid = true;
        for (int i = 0; i < n; i++) {
            if (i == 0 || s[i] != s[i - 1]) {
                if (seen.count(s[i])) {
                    valid = false;
                    break;
                }
                seen.insert(s[i]);
            }
        }       
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}