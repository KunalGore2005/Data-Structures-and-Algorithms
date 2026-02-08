#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result=0;
    int cubes=0;
    int i=1;
    while(cubes<=n){
        cubes+=(i*(i+1))/2;
        if(cubes<=n)result++;
        i++;
    }
    cout<<result<<endl;
    return 0;
}