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
   ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       vector<int> x;
       ListNode* temp=list1,*head=list1;
       int i=0;
       if(list1==NULL)
           return list2;
       if(list2==NULL)
           return list1;
       while(temp->next!=NULL){
           x.push_back(temp->val);
           temp=temp->next;
       }
       x.push_back(temp->val);
       temp->next=list2;
       while(list2!=NULL){
           x.push_back(list2->val);
           list2=list2->next;
       }
       sort(x.begin(),x.end());
       while(list1!=NULL){
           list1->val=x[i];
           list1=list1->next;
           i++;
       }
       return head;
    }
};