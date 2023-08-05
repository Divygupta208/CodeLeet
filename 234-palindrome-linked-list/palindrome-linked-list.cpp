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

    
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
      {
          return head;
      }
       ListNode* c=head;
       ListNode* p=nullptr;
       while(c!=nullptr)
       {
          ListNode*temp=new ListNode(c->val);//make a new list of same elements then reverse 
          temp->next=p;
          p=temp;
          c=c->next;
       }
       while(head && p )
       {
           if(head->val!=p->val)
           {
               return false;
           }
           head=head->next;
           p=p->next;
       }
       return true;
    
    }
};