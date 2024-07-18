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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=nullptr;
        ListNode* temp=l1;
        ListNode* head=nullptr;
        stack<int> s1,s2;
        while(temp)
        {
            s1.push(temp->val);
            temp=temp->next;
        }
        temp=l2;
        while(temp)
        {
            s2.push(temp->val);
            temp=temp->next;
        }
        int carry=0;
        while(!s1.empty() || !s2.empty() || carry)

        {
            int x=carry;

            if(!s1.empty())
            {
                 x+=s1.top();
                 s1.pop();
            }
            if(!s2.empty())
            {
                 x+=s2.top();
                s2.pop();
            }
            
            carry=x/10;
            x=x%10;
            ListNode* newnode = new ListNode(x);
            if(!dummy) 
            {
                dummy=newnode;
                head=dummy;
            }
            else
            {
                dummy->next=newnode;
                dummy=newnode;
            }
            // newnode->next=dummy;
            // dummy=newnode;

        }
      return head;
        
    }
};
