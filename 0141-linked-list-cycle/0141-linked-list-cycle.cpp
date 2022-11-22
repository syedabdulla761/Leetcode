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
        if(head==0)
            return false;
        for(int i=0;head->next!=NULL;i++){
            x[head->next]++;
            head=head->next;
            if(x[head->next]==1)
                return true;
        }
        return false;
    }
};