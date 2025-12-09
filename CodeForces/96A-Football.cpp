#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i=1;
    while(i<s.length()){
        int count=1;
        while(i<s.length() && s[i]==s[i-1]){
            count++;
            i++;
        }
        if(count>=7){
            cout << "YES";
            return 0;
        }
        i++;
    }
    cout << "NO";
    return 0;
}