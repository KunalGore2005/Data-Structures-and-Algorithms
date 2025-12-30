#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length(),m=s2.length();
    int i=0,j=m-1;
    while(i<j) swap(s2[i++],s2[j--]);
    if(s1==s2) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}