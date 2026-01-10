#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int res=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=1;
    while(i<n){
        int count=1;
        while(i<n && arr[i-1]<=arr[i]){
            count++;
            i++;
        }
        i++;
        if(count>res){
            res=count;
        }
    }
    cout<<res<<endl;
    return 0;
}