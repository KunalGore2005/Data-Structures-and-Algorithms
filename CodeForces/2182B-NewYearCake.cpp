#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        int answer = 0;
        for (int start = 0; start < 2; start++) {
            long long white = a, dark = b;
            long long layerSize = 1;
            int layers = 0;

            while (true) {
                if ((layers % 2) == start) {
                    if (white < layerSize) break;
                    white -= layerSize;
                } else {
                    if (dark < layerSize) break;
                    dark -= layerSize;
                }
                layers++;
                layerSize *= 2;
            }

            answer = max(answer, layers);
        }

        cout << answer << '\n';
    }

    return 0;
}
