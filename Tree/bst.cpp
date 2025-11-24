#include<iostream>
using namespace std;
struct node{
    int data;
    node*left=NULL;
    node*right=NULL;
};
class BinarySearchTree{
    public:
    
    void construct(node*&current,node* newnode){

        if (current==NULL){
            current=newnode;
            return;
        }
        else if(newnode->data<current->data){
            construct(current->left,newnode);
        } 
        else if(newnode->data>current->data){
            construct(current->right,newnode);
        }
    }
    void InOrderTraversal(node*root){
        if (root==NULL){
            return;
        }
        InOrderTraversal(root->left);
        cout<<root->data<<" ";
        InOrderTraversal(root->right);
    }
};
int main()
{
    BinarySearchTree bst;
    int n;
    cout<<"Enter the total nodes in your tree: ";
    cin>>n;
    cout<<"Enter the values of nodes"<<endl;
    node*root=NULL;
    for(int i=0;i<n;i++){
        node*newnode=new node;
        cin>>newnode->data;
        bst.construct(root,newnode);
    }
    cout<<root->data<<endl;
    bst.InOrderTraversal(root);
    return 0;
}