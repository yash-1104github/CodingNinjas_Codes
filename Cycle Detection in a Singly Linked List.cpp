bool detectCycle(Node *head)
{
	Node*slow=head;
    Node*fast= head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
            return true;
     }
     return false;
}
