// Approach 1 : using hash-map

bool detectLoop(Node *head) {
    if (head == NULL)
    {
        return false;
    }

    Node *temp = head;
    
    map<Node *, bool> visited;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

// Approach 2 : floyd's algo

bool detectLoop(Node *head) {
    Node *slow = head;
    Node *fast = head;

    if (head == NULL || head->next == NULL){
        return false;
    }

    while (fast != NULL){
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
