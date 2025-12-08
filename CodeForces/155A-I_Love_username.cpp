#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=-2;
    int max=-1,min=10001;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>max){
            max=a;
            count++;
        }
        if(a<min){
            min=a;
            count++;
        }
    }
    cout<<count;
    return 0;
}