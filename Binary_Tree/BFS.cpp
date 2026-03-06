#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
 int val;
 Node*right;
 Node*left;
 Node(int val){
    this->val = val;
    this->right = NULL;
    this->left = NULL;
 }
};
int level(Node*root){
    if(root == NULL) return 0;
    return 1+max(level(root->left),level(root->right));
    
}
void levelOrder(Node*root,int curr,int level){
    if(root == NULL) return;
if(curr == level){
    cout<<root->val<<" ";
    return;
}
levelOrder(root->left,curr+1,level);
levelOrder(root->right,curr+1,level);
}

int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    Node*e = new Node(50);
    Node*f = new Node(60);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
       levelOrder(a,1,3);
    return 0;
}