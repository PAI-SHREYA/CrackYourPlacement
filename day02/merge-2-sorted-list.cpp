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
        if(list1==nullptr) return list2;
        else if(list2==nullptr) return list1;
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* h=nullptr;
        ListNode* temp=nullptr;
        
        while(head1 && head2)
        {
            if(head1->val<head2->val) 
            {
                if(h==nullptr) 
                {h=head1;
                 temp=head1;
                }
                else
                {
                    temp->next=head1;
                    temp=temp->next;
                }
                head1=head1->next;
            }
            else
            {
                if(h==nullptr)
                {
                    h=head2;
                    temp=h;
                }
                else
                {
                    temp->next=head2;
                    temp=temp->next;
                }
                head2=head2->next;
            }
        }
        if(head1)
        {
            while(head1)
            {
                temp->next=head1;
                temp=temp->next;
                head1=head1->next;
            }
        }
        else
        {
            while(head2)
            {
                temp->next=head2;
                temp=temp->next;
                head2=head2->next;
            }
        }

        return h;
        

        
    }
};
