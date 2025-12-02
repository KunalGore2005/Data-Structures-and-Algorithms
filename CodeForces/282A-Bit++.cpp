#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result=0;
    for(int i=0;i<n;i++){
        string s="";
        cin>>s;
        if(s=="++X"||s=="X++")result++;
        else if(s=="--X"||s=="X--")result--;
    }
    cout<<result;
    return 0;
}