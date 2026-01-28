#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t1=0,t2=0,t3=0;
    vector<int>team1,team2,team3;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            t1++;
            team1.push_back(i+1);
        }
        else if(x==2){
            t2++;
            team2.push_back(i+1);
        }
        else{
            t3++;
            team3.push_back(i+1);
        }
    }
    int min_team=min(t1,min(t2,t3));
    cout<<min_team<<endl;
    for(int i=0;i<min_team;i++){
        cout<<team1[i]<<" "<<team2[i]<<" "<<team3[i]<<endl;
    }
    return 0;
}