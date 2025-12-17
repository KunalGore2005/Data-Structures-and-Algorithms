#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string prev="";
    int ans=0;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        if(a!=prev)
        {
            ans++;
            prev=a;
        }
    }
    cout<<ans;
    return 0;
}