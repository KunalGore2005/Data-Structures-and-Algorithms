#include<iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s>>t;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        if (t[i] >= 'A' && t[i] <= 'Z') {
            t[i] = t[i] + 32;
        }
    }
    if (s < t) {
        cout << -1 << endl;
    }
    else if (s > t) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}