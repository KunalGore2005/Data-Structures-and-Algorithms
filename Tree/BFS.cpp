#include<iostream>
#include<vector>
#include<queue>

using namespace std;
struct Node{
    int val;
    Node* left=NULL;
    Node* right=NULL;
};
class BinarySearchTree{
    public:
    //Constructing a Binary search tree
    void construct(Node*&root,Node* newnode){
        if(root==NULL){
            root=newnode;
            return;
        }
        else if(newnode->val<root->val){
            construct(root->left,newnode);
        }
        else{
            construct(root->right,newnode);
        }
    }

    void BreadthFirstSearch(Node*root){
        //Implementation of BFS in a Binary Search Tree, using Queue.
        if(root==NULL)return;
        queue<Node*>que;
        que.push(root);
        while(!que.empty()){
            int n=que.size();
            for(int i=0;i<n;i++){
                Node* curr=que.front();
                que.pop();
                cout<<curr->val<<" ";
                if(curr->left)que.push(curr->left);
                if(curr->right)que.push(curr->right);
            }
            cout<<endl;
        }
    }

    void InorderTraversal(Node*root){
        if(root==NULL) return;
        InorderTraversal(root->left);
        cout<<root->val<<" ";
        InorderTraversal(root->right);
    }
};
int main()
{
    BinarySearchTree bst;
    int x;
    cout<<"Enter the number of nodes in the Binary Search tree ";
    cin>>x;
    cout<<"Enter the values of all nodes"<<endl;
    Node *root=NULL;
    for(int i=0;i<x;i++){
        Node*newnode=new Node;
        cin>>newnode->val;
        bst.construct(root,newnode);
    }
    bst.InorderTraversal(root);
    cout<<endl;
    bst.BreadthFirstSearch(root);
    cout<<endl;
    bst.InorderTraversal(root);

    return 0;
}