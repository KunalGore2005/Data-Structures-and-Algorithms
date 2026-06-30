#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
        for(int i = 0; i < n; i++) scanf("%lld", &b[i]);
        
        long long prefix = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            prefix += (b[i] - a[i]);
            if(prefix < 0){
                ok = false;
                break;
            }
        }
        printf(ok ? "YES\n" : "NO\n");
    }
    return 0;
}