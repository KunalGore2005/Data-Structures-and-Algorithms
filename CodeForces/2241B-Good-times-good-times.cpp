#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long x;
        cin>>x;
        
        int L = 0;
        long long tmp = x;
        while(tmp > 0){
            L++;
            tmp /= 10;
        }
        if(L == 0) L = 1;
        
        long long y = 1;
        for(int i = 0; i < L; i++) y *= 10;
        y += 1;
        
        cout<<y<<endl;
    }
    return 0;
}