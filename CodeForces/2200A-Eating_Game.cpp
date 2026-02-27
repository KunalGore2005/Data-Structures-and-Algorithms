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
        int maxA = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxA = max(maxA, arr[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i]==maxA)count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}