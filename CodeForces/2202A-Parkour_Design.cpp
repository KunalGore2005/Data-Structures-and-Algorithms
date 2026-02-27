#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long x, y;
        cin >> x >> y;
        long long val = x - 2LL * y;
        if (val < 0 || val % 3 != 0){
            cout << "NO\n";
            continue;
        }
        long long m = val / 3;
        if (y < 0 && m < -2LL * y){
            cout << "NO\n";
        }
        else cout << "YES\n";
    }

    return 0;
}