#include<iostream>
#include<queue>
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left= NULL;
        this->right= NULL;
    }
};


node* buildTree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    root= new node(data);

    if(data==-1){
        return NULL;

    }

    cout<<"Enter data for left inserting "<<endl;
    root->left= buildTree(root->left);

    cout<<"Enter data for right inserting "<<endl;
    root->right= buildTree(root->right);

    return root;
}


void levelOrderTransversal(node* root){
    queue<node*> q;
    
}



int main(){

node* root= NULL;

root= buildTree(root);



}