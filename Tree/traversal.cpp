#include<iostream>
using namespace std;

struct node
{
    int data;
    node* left=NULL;
    node* right=NULL;
};
class traversal
{
    public:
    void InOrderTraversal(node* root){
        node* temp=root;
        if (temp==NULL){
            return ;
        }
        InOrderTraversal(temp->left);
        cout<<temp->data<<" ";
        InOrderTraversal(temp->right);
    }
    void PreOrderTraversal(node* root){
        if (root==NULL){
            return;
        }
        cout<<root->data<<" ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
    void PostOrderTraversal(node*root){
        if(root==NULL){
            return;
        }
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        cout<<root->data<<" ";
    }
};
int main()
{
    node* root=new node;
    root->data=5;
    node* l1=new node;
    l1->data=4;
    root->left=l1;
    node* l2=new node;
    l2->data=2;
    l1->left=l2;
    node* l3=new node;
    l3->data=3;
    l1->right=l3;

    node*r1=new node;
    r1->data=6;
    root->right=r1;
    node*r2=new node;
    r2->data=7;
    r1->left=r2;
    node*r3=new node;
    r3->data=8;
    r1->right=r3;

    traversal tree;
    tree.InOrderTraversal(root);
    cout<<endl;
    tree.PreOrderTraversal(root);
    cout<<endl;
    tree.PostOrderTraversal(root);

    
    return 0;
}