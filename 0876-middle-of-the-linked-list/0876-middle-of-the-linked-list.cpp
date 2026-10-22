/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode*t = head;
        while(t!=NULL){
            size++;
            t = t->next;
        }
        cout<<size<<endl;
        ListNode*temp = head;
        
        for(int i = 0;i<size/2;i++){
            temp = temp->next;
        }
        
        if((size%2)!= 0) return temp;
        else return temp;
        
    }
};