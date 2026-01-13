#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a - b);
        int result=0;
        result+= diff / 10;
        diff%=10;
        if(diff)result++;
        cout<<result<<"\n";
    }
    return 0;
}