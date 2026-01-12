#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sereja=0,dima=0;
    int l=0,h=n-1;
    while(l<=h){
        if(arr[l]>=arr[h]){
            sereja+=arr[l];
            l++;
        }
        else{
            sereja+=arr[h];
            h--;
        }
        if(l<=h){
            if(arr[l]>=arr[h]){
                dima+=arr[l];
                l++;
            }
            else{
                dima+=arr[h];
                h--;
            }
        }
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}