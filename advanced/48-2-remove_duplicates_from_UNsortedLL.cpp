// Approach 1 : 2 LOOPS O(n2) O(1)

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    // non-empty LL => atleast ek node hai
    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        Node *prev = curr;
        while (prev->next != NULL)
        {
            if (curr->data == prev->next->data)
            {
                //                 Node* tempKaNext = temp->next;
                Node *duplicate = prev->next;
                prev->next = prev->next->next;
                //                 temp->next = NULL;
                delete (duplicate);
            }
            else
            {
                prev = prev->next;
            }
        }
        curr = curr->next;
    }
    return head;
}


// Approach 2 : using map O(n) O(n)

Node *removeDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    unordered_map<int, int> m;
    Node *curr = head;
    m[curr->data] = 1;
    Node *prev = curr;
    curr = curr->next;
    while (curr != NULL)
    {
        if (m[curr->data])
        {
            prev->next = curr->next;
            free(curr);
        }
        else
        {
            m[curr->data] = 1;
            prev = curr;
        }
        curr = prev->next;
    }
    return head;
}

// Approach 3 : sort the LL and use previous problem algo
// O(n) O(1)