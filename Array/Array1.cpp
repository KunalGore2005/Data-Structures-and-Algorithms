#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    cout << "Enter the elements of your array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Printing Your Array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}