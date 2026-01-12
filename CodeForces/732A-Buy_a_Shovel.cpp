#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=10;i++){
        if((n*i)%10==0 || (n*i)%10==m){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}