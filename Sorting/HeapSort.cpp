#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>&arr,int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(i>=n || left>=n)return;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(vector<int>&arr,int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
void print(vector<int>&arr){
    cout<<"Array is sorted using heap sort!!! "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of elements in your array: ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the data of array \n";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    heapsort(arr,n);
    print(arr);
    return 0;
}