#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int result=0;
        int i=0;
        while(i<n){
            int count=0;
            while(i<n && arr[i]==0){
                count++;
                i++;
            }
            if(count>result){
                result=count;
            }
            i++;
        }
        cout<<result<<endl;
    }
    return 0;
}