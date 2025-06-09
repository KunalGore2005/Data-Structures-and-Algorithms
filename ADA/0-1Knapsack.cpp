#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many objects are there :";
    cin>>n;
    int p[n];
    cout<<"Enter the profits of these objects from "<<1<<" to "<<n<<endl;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int wt[n];
    cout<<"Enter the weights corresponding to these objects"<<endl;
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    int m;
    cout<<"Enter the maximum capacity of knapsack: ";
    cin>>m;

    int k[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int w=0;w<=m;w++){
            if(i==0 || w==0) k[i][w]=0;
            else if(wt[i-1]<=w) k[i][w]=max(p[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            else k[i][w]=k[i-1][w];
        }
    }
    cout<<"-------";
    for(int i=0;i<=m;i++){
        cout<<"--";
    }
    cout<<endl;
    cout<<"obj  | ";
    for(int i=0;i<=m;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"-------";
    for(int i=0;i<=m;i++){
        cout<<"--";
    }
    cout<<endl;
    for(int i=0;i<=n;i++){
        cout<<"obj"<<i<<" | ";
        for(int j=0;j<=m;j++){
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Total Profit = "<<k[n][m]<<endl;
    int i=n,j=m;
    cout<<"Objects taken: ";
    while(i>0 && j>0){
        if(k[i][j]==k[i-1][j]) i--;
        else{
            cout<<i<<" ";
            i--;
            j=j-wt[i];
        }
    }
    return 0;
}