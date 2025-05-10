#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int x=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
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
    InsertionSort(arr,n);

    cout<<"The array is sorted\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}