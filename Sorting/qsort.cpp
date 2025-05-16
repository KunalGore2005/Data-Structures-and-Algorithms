#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int pivot,int start,int end){
    while(start<=end){
        while(arr[start]<pivot) start++;
        while(arr[end]>pivot) end--;
        if(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    return start;
}
void qsort(vector<int>& arr,int start,int end){
    if(start>=end)return;
    int mid=start+(end-start)/2;
    int pivot = arr[mid];
    int pivotindex=partition(arr,pivot,start,end);
    qsort(arr,start,pivotindex-1);
    qsort(arr,pivotindex,end);
}
void print(vector<int>& arr){
    cout<<"Array is sorted using Quick sort!!!"<<endl;
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
    qsort(arr,0,n-1);
    print(arr);
    return 0;
}