#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string result="";
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            continue;
        }
        else{
            if(s[i]>='A' && s[i]<='Z'){
                result=result+'.';
                result=result+char(s[i]+32);
            }
            else{
                result=result+'.';
                result=result+s[i];
            }
        }
    }
    cout<<result<<"\n";
    return 0;
}