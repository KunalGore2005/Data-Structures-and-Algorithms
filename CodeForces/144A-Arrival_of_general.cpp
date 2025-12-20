#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_index = 0, min_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
        if (arr[i] <= arr[min_index]) {
            min_index = i;
        }
    }

    int swaps = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        swaps--;
    }

    cout << swaps << endl;
    return 0;
}
