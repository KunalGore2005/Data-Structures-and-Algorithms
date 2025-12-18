#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int result=0;
        if(a<b) result+=1;
        if(a<c) result+=1;
        if(a<d) result+=1;
        cout<<result<<endl;
    }
    return 0;
}