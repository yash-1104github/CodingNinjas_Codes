Node* removeKthNode(Node* head, int K)
{
    Node*fast = head;
       Node*slow = head;
    for(int i=0;i<K;i++)
     fast = fast->next; 

    if(fast==NULL)
    return head->next;//yaha pr pointer reverse hoga

    while (fast->next != NULL) {
    fast = fast->next;
    slow = slow->next;
    }
      
            Node*delNode= slow->next;
            slow->next = slow->next->next;
            free(delNode);

       return head;
}
