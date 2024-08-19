Node*findNthNode(Node*temp,int k){
      int cnt= 1;
       while(temp!=NULL){
           if(cnt==k)return temp;
           cnt++;
           temp = temp->next;
      }
      return temp;

 }

Node *rotate(Node *head, int k) {
     if(head==NULL || k == 0) return head;
     int len=1;
     Node*tail = head;
     while(tail->next!=NULL){
          tail = tail->next;
          len= len+1;
      }
         if(k%len == 0)return head;
         k= k%len;

         tail->next= head;//attach tail to hed
         Node*NewLastNode = findNthNode(head,len-k);
         head= NewLastNode->next;//length- k pr jo node h vo last node hogi
         //rotation k bade ishliye vo last node hodi aur uski next node head 
         //hogi after rotation 
         NewLastNode->next =NULL;
         return head;
}
