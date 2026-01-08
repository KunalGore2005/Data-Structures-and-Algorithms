#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    set<int> levels;
    for(int i=0;i<p;i++){
        int level;
        cin>>level;
        levels.insert(level);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int level;
        cin>>level;
        levels.insert(level);
    }
    if(levels.size()==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

    return 0;
}