#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int ans = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            ans++;
        }
        n /= 10;
    }
    if (ans == 0) {
        cout << "NO";
        return 0;
    }
    while (ans > 0) {
        int digit = ans % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO";
            return 0;
        }
        ans /= 10;
    }
    cout << "YES";
    return 0;
}
