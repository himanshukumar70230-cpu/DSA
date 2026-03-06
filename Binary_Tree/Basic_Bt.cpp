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
void display(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int SumOfNode(Node*root){
 if(root == NULL) return 0;
 int leftSum =  SumOfNode(root->left);
 int rightSum = SumOfNode(root->right);
 return root->val + leftSum + rightSum;
}
int product(Node*root){
        if(root == NULL) return 1;
        int leftproduct =   product(root->left);
        int rightproduct =  product(root->right);
    return root->val*leftproduct* rightproduct;
}
int size(Node*root){
    if(root == NULL) return 0;
    return 1+ size(root->left) + size(root->right);
}
int level(Node*root){
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
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
    display(a);
    cout<<endl;
    cout<<"Sum of the values of Node :- "<<SumOfNode(a);
    cout<<endl;
   cout<<size(a);
   cout<<endl;
   cout<<product(a);
    return 0;
}