#include<iostream>
using namespace std;

int main()
{
    int stage=4,n=8,min=INT32_MAX;
    int cost[9],d[9],path[4];
    path[0]=0;
    int C[9][9]={{0,0,0,0,0,0,0,0,0},{0,0,2,1,3,0,0,0,0},{0,0,0,0,2,3,0,0},{0,0,0,0,6,7,0,0},{0,0,0,0,6,8,9,0},{0,0,0,0,0,0,0,0,6},{0,0,0,0,0,0,0,0,4},{0,0,0,0,0,0,0,0,5},{0,0,0,0,0,0,0,0,0}};
    cost[n]=0;
    for(int i=n-1;i>=1;i--){
        min=INT32_MAX;
        for(int k=i+1;k<=n;k++){
            if(C[i][k]!=0 && C[i][k]+cost[k]<min){
                min=C[i][k]+cost[k];
                d[i]=k;
            }
        }
        cost[i]=min;
    }
    path[1]=1,path[stage]=n;
    for(int i=2;i<stage;i++){
        path[i]=d[path[i-1]];
    }
    for(int i=0;i<5;i++){
        cout<<path[i]<<" ";
    }
    return 0;
}