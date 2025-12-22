#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string result = "";
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            result += "I love ";
        else
            result += "I hate ";
        if(i != n )
            result += "that ";
    }
    cout << result << "it" << endl;
    return 0;
}