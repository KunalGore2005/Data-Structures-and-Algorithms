#include <iostream>
using namespace std;

class Array
{
    int n;
    int arr[];

public:
    void creation()
    {
        cout << "Enter the number of elements in your array: ";
        cin >> n;
        arr[n];
        cout << "Enter the elements of your array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Your array is created: ";
    }

    void print()
    {
        cout << "Printing Your Array:\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Array a;
    a.creation();
    a.print();
    return 0;
}