LinkedListNode<int> *reverse1(LinkedListNode<int> *&head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    LinkedListNode<int> *chotaHead = reverse1(head->next);

    head->next->next = head;
    head->next = NULL;

}

void reverse(LinkedListNode<int> *&head, LinkedListNode<int> *curr, LinkedListNode<int> *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    // RR
    LinkedListNode<int> *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    //    APPROACH 3
    return reverse1(head);



    //    APPROACH 2
    /*
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    reverse(head,curr,prev);
    return head;
    */




    //    APPROACH 1
    /*
    // this function will return a pointer

    // empty & single node ka case
    if(head==NULL || head->next==NULL){
        return head;
    }

    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev=curr;
        curr=forward;
    }
    return prev; // yeh naya head ho gaya
    */
}