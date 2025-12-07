#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool alphabet[26] = {false};
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            alphabet[s[i] - 'a'] = true;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            alphabet[s[i] - 'A'] = true;
    }
    for (int i = 0; i < 26; i++) {
        if (!alphabet[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}