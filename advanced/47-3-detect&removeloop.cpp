Node *floydDetection(Node *head)
{

    // empty list or 1 node
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    // floyd's algo
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{

    // empty list
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *intersection = floydDetection(head);

    if (intersection == NULL)
    {
        return NULL;
    }

    // slow ko dobara head pe dal do and dono ko same speed se bhagao
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    // slow == fast
    return slow;
}

Node *removeLoop(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *startOfLoop = getStartingNode(head);
    if (startOfLoop == NULL)
    {
        return head;
    }

    Node *temp = startOfLoop;

    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;

    return head;
}