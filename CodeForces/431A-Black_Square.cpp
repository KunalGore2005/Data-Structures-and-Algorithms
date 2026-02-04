#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int total=0;
    for(char ch:s){
        if(ch=='1') total+=a;
        else if(ch=='2') total+=b;
        else if(ch=='3') total+=c;
        else if(ch=='4') total+=d;
    }
    cout<<total<<endl;
    return 0;
}