#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    while(n!=1){
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
        }
        n--;
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of elements in your array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the data of array \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    cout<<"The array is sorted\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}