Node *kReverse(Node *head, int k)
{
    // base case
    if (head == NULL)
    {
        return NULL;
    }

    // step 1 : reverse first k nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    // step 2 : recursion sambhal lega
    head->next = kReverse(curr, k);

    // step 3 : return head of reversed list
    return prev;
}