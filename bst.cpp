#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left= right =nullptr;
    }
};
Node* insert(Node*root , int val){
    if(root == NULL ){
        return new Node(val);
    }
    if(root->data > val){
        root->left = insert(root->left , val);
    }
    else{
     root->right = insert(root->right , val);


    }

}

Node* builBST(vector<int> arr){
    Node* root =nullptr;
    for(int val : arr){
        root = insert(root,val);

    }
    return root;
}

void inorder(Node*root){
    if(root==nullptr){
        return;
    }

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

};

bool search(Node*root , int key){
    if(root ==nullptr){
        return false;
    }
    if(root->data ==key){
        return true;
    }
    if(root->data > key){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
};

Node* getInoderSuccessor(Node* root){
    while(root != NULL && root->left != NULL){
        root = root->left;
    }
    return root;
}
 

Node* delNode(Node*root,int key){
    if(root == NULL){
        return NULL;
    }

    if(root->data>key){
        root->left = delNode(root->left , key);
    }
    else if(root->data < key){
        root->right = delNode(root->right , key);
    }
    else{

        // zero child or one child case
        if(root->left == NULL){
            Node*temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;

        }
        else{
            Node* IS = getInoderSuccessor(root->right);
            root->data = IS->data;
            root->right =delNode(root->right ,IS->data);
        }
    }
    return root;
}
int main(){
    vector<int> arr = {3,2,1,5,4,6};
    Node* root = builBST(arr);
     inorder(root);
    cout << endl;
    cout<<"before : ";
    delNode(root,5);
    inorder(root);
    cout << endl;

    cout<<search(root,5)<<endl;

    return 0;
}