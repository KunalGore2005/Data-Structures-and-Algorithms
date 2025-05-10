#include<iostream>
#include<vector>
using namespace std;

void QuickSort(vector<int>& arr,int start, int end){
    if (start>=end) return;
    int mid=start+(end-start)/2;
    int pivot=arr[mid];
    int l=start,h=end;
    while(l<=h){
        while (arr[l] < pivot) l++;
        while (arr[h] > pivot) h--;
        if(l<=h){
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }
    QuickSort(arr,start,h);
    QuickSort(arr,l,end);
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
    QuickSort(arr,0,n-1);
    print(arr);
    return 0;
}