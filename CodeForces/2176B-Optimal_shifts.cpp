#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> ones;
        for (int i = 0; i < n; i++)
            if (s[i] == '1') ones.push_back(i);

        int answer = 0;

        for (int x = 0; x < n; x++) {
            if (s[x] == '1') continue;

            auto it = upper_bound(ones.begin(), ones.end(), x);
            int i;
            if (it == ones.begin()) {
                i = ones.back();
            } else {
                --it;
                i = *it;
            }

            int d = x - i;
            if (d < 0) d += n;

            answer = max(answer, d);
        }

        cout << answer << "\n";
    }
    return 0;
}