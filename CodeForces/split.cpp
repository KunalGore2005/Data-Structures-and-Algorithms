#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, int> freq;
        for (int i = 0; i < 2 * n; i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int odd = 0, even = 0;
        for (auto &p : freq){
            if (p.second % 2 == 1)
                odd++;
            else
                even++;
        }

        int result = 0;
        if (even == 1 && odd == 0){
            result = 0;
        }
        else{
            int can_use_even = min(even, n - odd);
            result = odd + 2 * can_use_even;
        }
        cout << result << endl;
    }
    return 0;
}