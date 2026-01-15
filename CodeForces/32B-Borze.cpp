#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string result = "";
    int n = s.length();
    for (int i = 0; i < n; ){
        if (s[i]=='.') {
            result+='0';
            i++;
        }
        else if(s[i]=='-' && i+1<n && s[i+1]=='.'){
            result+='1';
            i+=2;
        }
        else if(s[i]=='-' && i+1<n && s[i+1]=='-'){
            result+='2';
            i+=2;
        }
    }
    cout << result;
    return 0;
}