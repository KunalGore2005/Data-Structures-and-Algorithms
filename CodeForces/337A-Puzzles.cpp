#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    if(m==n){
        cout<<arr[m-1]-arr[0]<<endl;
        return 0;
    }
    int result=INT_MAX;
    for(int i=0;i<=m-n;i++){
        result=min(result,arr[i+n-1]-arr[i]);
    }
    cout<<result<<endl;
    return 0;
}