#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        stack<char> s;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            if(s.empty() || s.top()!=str[i]){
                s.push(str[i]);
            }
            else s.pop();
        }
        if(s.empty())cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}