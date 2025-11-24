#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in your array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Linear search
    int x;
    cout<<"Which element you want to search: ";
    cin>>x;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<<" Found at index "<<i;
            found=true;
            break;
        }
    }
    if(!found)cout<<"Element not in array.";
    return 0;
}