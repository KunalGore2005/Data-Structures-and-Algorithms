#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int result=0;
    while(x>0){
        if(x>=5){
            result++;
            x-=5;
            continue;
        }
        else if(x>=4){
            result++;
            x-=4;
            continue;
        }
        else if(x>=3){
            result++;
            x-=3;
            continue;
        }
        else if(x>=2){
            result++;
            x-=2;
            continue;
        }
        else{
            result++;
            x-=1;
            continue;
        }
    }
    cout<<result;
    return 0;
}