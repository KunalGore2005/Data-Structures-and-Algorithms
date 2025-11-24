#include<iostream>
using namespace std;

int binary_search(int arr[],int x,int n){
    int l=0,h=n-1;
    while(l<h){
        int mid=l+(h-l)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of your array in sorted order\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Binary search
    int x;
    cout<<"Which element you want to search: ";
    cin>>x;
    int result=binary_search(arr,x,n);
    if(result==-1)cout<<"Element not in array.\n";
    else cout<<x<<" is found at index "<<result;
    return 0;
}