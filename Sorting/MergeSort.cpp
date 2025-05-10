#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int start,int mid,int end){
    vector<int>temp;
    int i=start,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[start+k]=temp[k];
    }
}
void MergeSort(vector<int>& arr,int start,int end){
    if(start >= end) return;
    int mid=start+(end-start)/2;
    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);
    
    merge(arr,start,mid,end);
}
void print(vector<int>& arr){
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
    MergeSort(arr,0,n-1);
    print(arr);
    return 0;
}