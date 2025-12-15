#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            l++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            u++;
        }
    }
    if(u>l){
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
        }
    }
    cout<<s;
    return 0;
}