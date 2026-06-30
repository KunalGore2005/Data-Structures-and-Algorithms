#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXV = 1000001;
int spf[MAXV];

void sieve(){
    for(int i=2;i<MAXV;i++){
        if(!spf[i]){
            for(long long j=i;j<MAXV;j+=i){
                if(!spf[j]) spf[j]=(int)i;
            }
        }
    }
}

inline bool isPerfectSquare(int x){
    while(x>1){
        int p=spf[x];
        int cnt=0;
        while(x%p==0){x/=p;cnt++;}
        if(cnt&1) return false;
    }
    return true;
}

int main(){
    sieve();
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        vector<vector<int>> adj(n+1);
        for(int i=0;i<n-1;i++){
            int u,v;
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> parent(n+1,0);
        vector<int> order;
        order.reserve(n);
        vector<char> visited(n+1,0);
        vector<int> stk;
        stk.reserve(n);
        stk.push_back(1);
        visited[1]=1;
        while(!stk.empty()){
            int u=stk.back(); stk.pop_back();
            order.push_back(u);
            for(int v: adj[u]){
                if(!visited[v]){
                    visited[v]=1;
                    parent[v]=u;
                    stk.push_back(v);
                }
            }
        }
        vector<ll> sz(n+1,1);
        for(int i=(int)order.size()-1;i>=0;i--){
            int u=order[i];
            if(parent[u]) sz[parent[u]]+=sz[u];
        }
        vector<vector<ll>> childSz(n+1);
        for(int u=1;u<=n;u++){
            if(parent[u]) childSz[parent[u]].push_back(sz[u]);
        }
        ll answer=0;
        for(int x=1;x<=n;x++){
            if(!isPerfectSquare(a[x])) continue;
            ll sum_s=0,sum_sq=0,sum_cb=0;
            for(ll s: childSz[x]){
                sum_s+=s;
                sum_sq+=s*s;
                sum_cb+=s*s*s;
            }
            ll e2=(sum_s*sum_s - sum_sq)/2;
            ll e3=(sum_s*sum_s*sum_s - 3*sum_s*sum_sq + 2*sum_cb)/6;
            ll A=e2+e3;
            ll cnt2=e2+sum_s;
            ll B=cnt2*(ll)(n-sz[x]);
            answer+=A+B;
        }
        printf("%lld\n",answer);
    }
}