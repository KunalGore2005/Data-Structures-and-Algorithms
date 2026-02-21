#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int countBlocks(const string &s) {
    if (s.empty()) return 0;
    
    int blocks = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            blocks++;
        }
    }
    return blocks;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s;
        cin >> s;
        
        int n = s.length();
        int maxBlocks = 0;
        
        for (int i = 0; i < n; i++) {
            string rotated = s.substr(i) + s.substr(0, i);
            
            int blocks = countBlocks(rotated);
            maxBlocks = max(maxBlocks, blocks); 
        }
        cout << maxBlocks << endl;
    }
    return 0;
}