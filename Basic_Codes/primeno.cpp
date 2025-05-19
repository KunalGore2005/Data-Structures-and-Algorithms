#include<iostream>
#include<math.h>
using namespace std;

int squareroot(int n){
    int low=0,high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
int main()
{
    int n;
    cout<<"Enter a no. :";
    cin>>n;
    bool flag=true;
    if(n==2||n==3||n==5){
        cout<<"Prime no.";
        return 0;
    }
    if(n%2==0 || n%3==0 || n%5==0){
     cout<<"Not Prime ";
     return 0;
    }    
    else {
        int sqrt=squareroot(n);
        int i=6;
        while(i<=sqrt){
            if(n%i==0){
                flag = false;
                cout<<"Not Prime ";
                return 0;
            }
            i++;
        }
        if(flag==true){
            cout<<"Prime no.";
        }
    }
    return 0;
}