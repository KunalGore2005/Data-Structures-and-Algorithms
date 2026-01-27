#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>s)cout<<"NO\n";
        else if(sum==s)cout<<"YES\n";
        else{
            int diff=s-sum;
            if(diff%x==0)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}