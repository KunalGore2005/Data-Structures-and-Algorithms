#include <iostream>
using namespace std;

int digit_sum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        int count = 0;
        for (long long y = x + 1; y <= x + 81; y++) {
            if (y - digit_sum(y) == x) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}