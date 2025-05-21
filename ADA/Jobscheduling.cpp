#include<iostream>
#include<algorithm>
using namespace std;

struct job{
    int id;
    int deadline;
    int profit;
};
int compare(const void*a,const void *b){
    return ((job*)b)->profit-((job*)a)->profit;
}
void jobscheduling( job jobs[],int n){
    qsort(jobs,n,sizeof(jobs[0]),compare);
    int maxdeadline=0;
    for (int i=0;i<n;i++){
        if(jobs[i].deadline>maxdeadline){
            maxdeadline=jobs[i].deadline;
        }
    }
    int schedule[maxdeadline];
    for(int i=0;i<maxdeadline;i++){
        schedule[i]=-1;
    }
    int tp=0;
    int cj=0;
    for(int i=0;i<n;i++){
        for(int j=jobs[i].deadline-1;j>=0;j--){
            if(schedule[j]==-1){
                schedule[j]=i;
                tp+=jobs[i].profit;
                cj++;
                break;
            }
        }
    }
    cout<<"Count of Jobs: "<<cj<<endl;
    cout<<"Total Profit : "<<tp<<endl;
    cout<<"Job Schedule: "<<endl;
    for(int i=0;i<maxdeadline;i++){
        if(schedule[i]!=-1){
            cout<<jobs[schedule[i]].id<<" ";
        }
    }
}
int main()
{
    int x;
    cout<<"Enter total no. of jobs: ";
    cin>>x;
    job jobs[x];
    cout<<"Enter the values of job id, deadline and profit respectively for each job: "<<endl;
    for(int i=0;i<x;i++){
        cin>>jobs[i].id>>jobs[i].deadline>>jobs[i].profit;
    }
    int n=sizeof(jobs)/sizeof(jobs[0]);
    jobscheduling(jobs,n);
    return 0;
}