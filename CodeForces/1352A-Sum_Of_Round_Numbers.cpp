#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> result;
        while(n>0){
            int power = 1;
            while(power * 10 <= n){
                power *= 10;
            }
            int round_number = (n / power) * power;
            result.push_back(round_number);
            n -= round_number;
        }
        cout<<result.size()<<endl;
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}