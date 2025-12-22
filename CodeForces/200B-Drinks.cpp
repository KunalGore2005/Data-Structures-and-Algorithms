#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        float p;
        cin >> p;
        sum += p;
    }
    cout << sum/n << endl;
    return 0;
}