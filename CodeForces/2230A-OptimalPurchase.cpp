#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a,b;
        cin>>a>>b;
        long long result=0;
        if(3*a<=b){
            result=a*n;
        }
        else{
            result=(n/3)*b;
            int r=n%3;
            result+=min(r*a,b);
        }
        cout<<result<<endl;
    }
    return 0;
}