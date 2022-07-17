Node *uniqueSortedList(Node *head)
{

    // empty
    if (head == NULL)
    {
        return NULL;
    }

    // non empty list

    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            delete (curr->next);
            curr->next = curr->next->next;
        }
        else // not equal
        {
            curr = curr->next;
        }
    }
    
    return head;
}