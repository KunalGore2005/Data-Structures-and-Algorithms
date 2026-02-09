#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int result=0;
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            if(m[s[i]]>1){
                result++;
            }
            else result+=2;
        }
        cout<<result<<endl;
    }
    return 0;
}