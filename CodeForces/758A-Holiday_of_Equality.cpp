#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max_val=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max_val){
            max_val=arr[i];
        }
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=(max_val-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}