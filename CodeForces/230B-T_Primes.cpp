#include<iostream>
#include<cmath>
using namespace std;

bool prime(long long n){
    if(n<=1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(long long i=3;i*i<=n;i+=2){
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        if(x<4){
            cout<<"NO\n";
            continue;
        }
        long long root = sqrt(x);
        if(root*root==x && prime(root)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}