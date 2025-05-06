#include<iostream>
using namespace std;

struct node{
    int data;
    node*left=NULL;
    node*right=NULL;
};
class binarysearchtree{
    public:
    node* constructnode(int val){
        node*newnode=new node;
        newnode->data=val;
        return newnode;
    }
    void constructBST(node*&current,node*newnode){
        if(current==NULL){
            current=newnode;
        }
        else if(newnode->data<current->data){
            constructBST(current->left,newnode);
        }
        else if(newnode->data>current->data){
            constructBST(current->right,newnode);
        }
    }
    void InorderTravesal(node*root){
        if(root==NULL){
            return;
        }
        InorderTravesal(root->left);
        cout<<root->data<<" ";
        InorderTravesal(root->right);
    }
    void PreOrderTraversal(node*root){
        if(root==NULL){
            return;
        }
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
        cout<<root->data<<" ";
    }
    void PostOrderTraversal(node*root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
    }
};
int main()
{
    binarysearchtree bst;
    node*root=NULL;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter the values of "<<n<<" nodes"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        node*a=bst.constructnode(temp);
        bst.constructBST(root,a);
    }
    cout<<"In-Order Traversal: ";
    bst.InorderTravesal(root);
    cout<<"Pre-Order Traversal: ";
    bst.PreOrderTraversal(root);
    cout<<"Post-Order Traversal: ";
    bst.PostOrderTraversal(root);
    return 0;
}