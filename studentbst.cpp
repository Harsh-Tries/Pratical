#include<bits/stdc++.h>
using namespace std;
struct Node{
    public :
    int roll , marks;
    string name;
    Node*left ;
    Node*right;

    Node(int x, string n , int m){
        roll = x ;
        name = n;
        marks = m;
        left = right =nullptr;
    }
};

Node* insert(Node*root,int x, string n, int m){
    if(root== nullptr){
        return new Node(x,n,m);
    }
    if(root->roll > x){
        root->left = insert(root->left,x,n,m);
    }
    else if(root->roll <x){
        root->right = insert(root->right,x,n,m);
    }
    return root;
};
Node*search(Node*root,int x){
    if(root == nullptr){
        return nullptr;
    }
    if(root->roll >x ){
        return search(root->left,x);

    }
    else{
        return search(root->right,x);
    }
}




int main(){
    Node*root =nullptr;
    root=insert(root,103,"Harsh",90);
    root=insert(root,101,"Rahul",85);
    root=insert(root,105,"Amit",95);
    root=insert(root,102,"Rohan",80);
    root=insert(root,104,"Raj",88);
    cout<<"searching for roll no 102"<<endl;
    Node*s = search(root,102);
     if(s) cout<<s->roll<<" "<<s->name<<" "<<s->marks<<endl;
    

return 0;
}