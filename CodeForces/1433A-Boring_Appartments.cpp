#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int result=0;
        int i=n%10;
        result+=(i-1)*10;
        if(n>=1111)result+=10;
        else if(n>=111)result+=6;
        else if(n>=11)result+=3;
        else if(n>=1)result+=1;
        cout<<result<<endl;
    }
    return 0;
}