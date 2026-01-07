#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int result=0;
    if(n%2==0){
        result=m*(n/2);
    }
    else if(m%2==0){
        result=n*(m/2);
    }
    else{
        int a=n,b=m;
        n=max(a,b);
        m=min(a,b);
        result=m*((n-1)/2);
        result+=(m-1)/2;
    }
    cout<<result;
    return 0;
}