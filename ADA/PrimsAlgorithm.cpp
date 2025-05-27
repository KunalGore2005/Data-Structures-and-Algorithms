#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int get_min(vector<int> &key,vector<bool> &isMST){
    int mini = INT_MAX, minIndex = -1;
    for(int i=0;i<key.size();i++){
        if(!isMST[i] && key[i] < mini){
            mini = key[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void print(vector<int> &parent,vector<vector<int>> &graph){
    for(int i=1; i<graph.size(); i++){
        cout << parent[i] << " --> " << i << " cost: " << graph[parent[i]][i] << endl;
    }
}

void prims(vector<vector<int>> &graph){
    int v = graph.size();
    vector<int> key(v,INT_MAX);
    vector<int> parent(v,-1);
    vector<bool> isMST(v,0);

    key[0] = 0;
    for (int i = 0; i < v; i++)
    {
        int mini = get_min(key,isMST);
        isMST[mini] = 1;

        for(int i=0;i<v;i++){
            if(graph[mini][i] && !isMST[i] && graph[mini][i] < key[i]){
                parent[i] = mini;
                key[i] = graph[mini][i];
            }
        }
    }
    
    print(parent,graph);
}

int main(){
    vector<vector<int>> arr = {
        {0,2,0,6,0},
        {2,0,3,8,5},
        {0,3,0,0,7},
        {6,8,0,0,9},
        {0,5,7,9,0}
    };

    prims(arr);
    return 0;
}