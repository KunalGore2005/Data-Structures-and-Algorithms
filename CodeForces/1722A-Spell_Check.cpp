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
        bool is_valid=true;
        if(n!=5) is_valid=false;
        unordered_map<char,bool>valid={{'T',false},{'i',false},{'m',false},{'u',false},{'r',false}};
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            if(valid.count(c) && !valid[c]){
                valid[c]=true;
            }
            else {
                is_valid=false;
            }
        }
        for(auto &pair:valid){
            if(!pair.second){
                is_valid=false;
                break;
            }
        }
        if(is_valid){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}