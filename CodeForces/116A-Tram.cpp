#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    int temp=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        temp-=a;
        temp+=b;
        res=max(res,temp);
    }
    cout<<res;
    return 0;
}