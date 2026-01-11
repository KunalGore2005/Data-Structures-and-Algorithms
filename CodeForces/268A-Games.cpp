#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i] >> arr2[i];
    }
    int result=0;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(i != j && arr1[i] == arr2[j]){
                count++;
            }
        }
        result += count;
    }
    cout << result << endl;
    return 0;
}