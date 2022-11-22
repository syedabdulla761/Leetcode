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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> x;
        ListNode* temp=head;
        if(head==0)
            return false;
        for(int i=0;temp->next!=NULL;i++){
            x[temp->next]++;
            temp=temp->next;
            if(x[temp->next]==1)
                return true;
        }
        return false;
    }
};