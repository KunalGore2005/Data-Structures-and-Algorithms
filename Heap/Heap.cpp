#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>&arr,int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(i>=n)return;
    if(l>=n)return;
    if(l<n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void print(vector<int>&arr){
    cout<<"Heapified array!! "<<endl;
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
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    print(arr);
    return 0;
}