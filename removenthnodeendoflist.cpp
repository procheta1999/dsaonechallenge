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
    int length(ListNode* head)
    {
        if(head==NULL)
        {
            return 0;
        }
        return 1+length(head->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // cout<<length(head)<<endl;
        if(length(head)==1 && n==1)
        {
            delete head;
            return NULL;
        }
        if(length(head)==n)
        {
            ListNode* start=head;
            head=head->next;
            delete start;
            return head;
        }
        int pos=length(head)-n;
        // cout<<length(head)<<endl;
        int i=0;
        ListNode* temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        
        ListNode* nextNode=temp->next;
        temp->next=nextNode->next;
        delete nextNode;
        return head;
    }
};
