#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, h, k;
        cin >> n >> h >> k;
        vector<ll> a(n);
        ll total_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum += a[i];
        }
        ll full_mags = (h - 1) / total_sum;
        ll rem = h - full_mags * total_sum;
        if (rem == 0) {
            cout << full_mags * (n + k) << "\n";
            continue;
        }
        vector<ll> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + a[i];
        }
        vector<ll> min_prefix(n);
        min_prefix[0] = a[0];
        for (int i = 1; i < n; i++) {
            min_prefix[i] = min(min_prefix[i-1], a[i]);
        }
        vector<ll> max_suffix(n);
        max_suffix[n-1] = a[n-1];
        for (int i = n-2; i >= 0; i--) {
            max_suffix[i] = max(max_suffix[i+1], a[i]);
        }
        
        ll bullet_index = n;
        for (int i = 0; i < n; i++) {
            if (prefix[i] >= rem) {
                bullet_index = i+1;
                break;
            }
            if (i < n-1) {
                ll max_after = max_suffix[i+1];
                ll min_before = min_prefix[i];
                
                if (prefix[i] + max_after - min_before >= rem) {
                    bullet_index = i+1;
                    break;
                }
            }
        }
        cout << full_mags * (n + k) + bullet_index << "\n";
    }
    
    return 0;
}