#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool flag=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==k)flag=true;
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}