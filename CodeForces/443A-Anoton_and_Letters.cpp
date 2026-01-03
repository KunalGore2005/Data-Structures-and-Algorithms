#include<iostream>
#include<set>
using namespace std;

int main()
{
    int i=0;
    char c;
    set<char> st;
    do{
        cin>>c;
        if((c>='a' && c<='z')){
            st.insert(c);
        }
    }while(c!='}');
    cout<<st.size();
    return 0;
}