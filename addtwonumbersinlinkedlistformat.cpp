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

ListNode* reverse(ListNode* head)
    {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode* rest=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return rest;
    }
    int length(ListNode* start)
    {
        if(start=NULL)
        {
            return 0;
        }
        return 1+length(start->next);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
       ListNode* curr=l2;
        int s=0;
        int carry=0;
        ListNode* pinStart=NULL;
        ListNode* pinEnd=NULL;
        ListNode* tempNode;
        while(temp!=NULL || curr!=NULL)
        {
            if(temp==NULL)
            {
                s=carry+curr->val; 
            }
            else if(curr==NULL)
            {
                 s=carry+temp->val;
            }
            else
            {
                 s=carry+temp->val+curr->val;
            }
            // s=carry+temp->val+curr->val;
            if(s>=10)
            {
                carry=1;
            }
            else
            {
                carry=0;
            }
            s=s%10;
            ListNode* newNode;
            newNode=new ListNode(s);
            // newNode->val=s;
            // newNode->next=NULL;
            if(pinStart==NULL && pinEnd==NULL)
            {
                pinEnd=newNode;
                // ListNode* temp=newNode;
                // pinEnd=temp;
                pinStart=pinEnd;
            }
            else
            {
                pinEnd->next=newNode;
                pinEnd=newNode;
            }
            
            if(temp==NULL)
            {
                curr=curr->next;
            }
            else if(curr==NULL)
            {
                 temp=temp->next;
            }
            else
            {
                 temp=temp->next;
                curr=curr->next;
            }
            s=0;
        }
        if(carry>0)
        {
            ListNode *carryNode=new ListNode(carry);
            pinEnd->next=carryNode;
            pinEnd=carryNode;
        }
        return pinStart;
    }
