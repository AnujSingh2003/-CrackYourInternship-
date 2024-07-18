class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        ListNode* l1=list1;
        ListNode* l2=list2;
        while(l1&&l2){
            if(l1->val<l2->val){
                temp->next=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1!=NULL)temp->next=l1;
        else temp->next=l2;
        return dummy->next;;
    }
};