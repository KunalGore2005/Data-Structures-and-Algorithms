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
        result+= diff / 9;
        diff%=9;
        result+= diff / 8;
        diff%=8;
        result+= diff / 7;
        diff%=7;
        result+= diff / 6;
        diff%=6;
        result+= diff / 5;
        diff%=5;
        result+= diff / 4;
        diff%=4;
        result+= diff / 3;
        diff%=3;
        result+= diff / 2;
        diff%=2;
        result+= diff;
        cout<<result<<"\n";
    }
    return 0;
}