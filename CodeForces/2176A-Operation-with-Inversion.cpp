#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        
        int max_so_far = arr[0];
        int ans = 0;

        for (int i = 1; i < n; i++) {
            if (max_so_far > arr[i]) {
                ans++;
            } else {
                max_so_far = arr[i];
            }
        }

        cout << ans << "\n";
    }
    return 0;
}