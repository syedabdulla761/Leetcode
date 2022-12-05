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
        if(head==NULL)return head;
        vector<int> x;
        ListNode* ans=head;
        while(head){
            x.push_back(head->val);
            head=head->next;
        }
        int mid=x.size()/2;
        for(int i=0;i<mid;i++){
            ans=ans->next;
        }
        return ans;
    }
};