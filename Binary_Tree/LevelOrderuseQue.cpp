#include<bits/stdc++.h>
//#include<queue>

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
void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node*temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right); 
    }
    cout<<endl;

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
    levelOrder(a);
    return 0;
}