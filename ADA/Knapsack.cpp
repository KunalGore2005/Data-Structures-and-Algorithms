#include<iostream>
using namespace std;

struct item{
    int profit;
    int weight;
};
void knapsack(){

}
int main()
{
    int n;
    cout<<"Enter the total items :";
    cin>>n;
    item items[n];
    cout<<"Enter profit and weight of each item respectively :"<<endl;
    for(int i=0;i<n;i++){
        cin>>items[i].profit>>items[i].weight;
    }
    int m;
    cout<<"Enter the maximum capacity of the Knapsack: ";
    cin>>m;
    return 0;
}