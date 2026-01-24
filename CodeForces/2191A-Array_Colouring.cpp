#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int nums[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            nums[i]=arr[i];
        }
        unordered_map<int,int>mp;
        sort(nums,nums+n);
        for(int i=0;i<n;i++){
            if(i%2==0)mp[nums[i]]=0;
            else mp[nums[i]]=1;
        }
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(mp[arr[i]]==mp[arr[i+1]]){
                cout<<"NO\n";
                flag=true;
                break;
            }
        }
        if(!flag)cout<<"YES\n";
    }
    return 0;
}