#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0,c=0,posb=0,posc=1;
        int res=-1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i==0){
                a=x;
                posb=i+1;
            }
            else if(x!=a){
                c++;
                posc=i+1;
            }
        }
        if(c!=1){
            res=posb;
        }
        else if(c==1){
            res=posc;
        }
        cout<<res<<endl;
    }
    return 0;
}