Node *firstNode(Node *head)
{
    Node*slow= head;
    Node*fast= head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast= fast->next->next;

        if(slow==fast){
            slow=head;
            while(fast!=slow){
               fast=fast->next;
               slow=slow->next;
            }
            return slow;

        }
    }
    return NULL;
}
