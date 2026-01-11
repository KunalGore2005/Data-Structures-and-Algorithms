#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int>mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(mp.find(s) == mp.end()){
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else{
            cout << s+to_string(mp[s]) << endl;
            mp[s]++;
        }
    }
    return 0;
}