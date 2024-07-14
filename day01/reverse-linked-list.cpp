class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* prev=nullptr;
      ListNode* temp=head;
      ListNode* curr=head;
      while(curr)
      {
          
         temp=temp->next; 
         curr->next=prev;
         prev=curr;
         
         curr=temp;
      }
      head=prev;
      return head ;
    }

};
