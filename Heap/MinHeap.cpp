#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>& arr,int n,int i){
    int smallest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(i>=n || l>=n)return;
    if(r<n && arr[r]<arr[smallest]){
        smallest=r;
    }
    if(l<n && arr[l]<arr[smallest]){
        smallest=l;
    }
    if(smallest !=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}
void print(vector<int> & arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the elements of array "<<endl;
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