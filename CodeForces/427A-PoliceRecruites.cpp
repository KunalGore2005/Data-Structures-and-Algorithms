#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result=0;
    int count=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            if(count>0){
                    count--;
            }
            else{
                result++;
            }
        }
        else{
            count+=x;
        }
    }
    cout<<result;
    return 0;
}