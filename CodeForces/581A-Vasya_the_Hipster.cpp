#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int min_shoes = min(a,b);
    int r=(a - min_shoes)/2 + (b - min_shoes)/2;
    cout<<min_shoes<<" "<<r<<endl;
    return 0;
}