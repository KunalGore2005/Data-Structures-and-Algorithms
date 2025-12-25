#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string result="";
    int i = 0, n = s.length();

    while (i < n) {
        if (i + 2 < n && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (!result.empty() && result.back() != ' ')
                result += ' ';
            i += 3;
        } 
        else {
            result += s[i];
            i++;
        }
    }
    if (!result.empty() && result.back() == ' ')
        result.pop_back();
    cout<<result;
    return 0;
}