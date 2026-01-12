#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int total=240;
    int time_left=total-k;
    int problems=0;
    if(n*(n+1)/2*5<=time_left){
        problems=n;
    }
    else{
        int l=1,h=n;
        while(l<=h){
            int mid=l+(h-l)/2;
            int time_needed=mid*(mid+1)/2*5;
            if(time_needed<=time_left){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        problems=h;
    }
    cout<<problems<<endl;
    return 0;
}