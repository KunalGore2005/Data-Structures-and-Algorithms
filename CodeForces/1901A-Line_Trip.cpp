#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int result=0;
        int prev=0;
        for(int i=0;i<n;i++){
            int curr;
            cin>>curr;
            result=max(result,curr-prev);
            prev=curr;
        }
        result=max(result,2*(x-prev));
        cout<<result<<endl;

    }
    return 0;
}