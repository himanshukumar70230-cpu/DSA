/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow = head;
        ListNode*fast = head;
        ListNode*temp = head;
        bool check = false;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                check = true;
                break;
            }
        }
        int count = 0;
        if(check == true){
            while(temp!=slow){
                temp = temp->next;
                slow = slow->next;
                count++;
            }
        }
        if(check == false) return NULL;
        return temp;
    }
};