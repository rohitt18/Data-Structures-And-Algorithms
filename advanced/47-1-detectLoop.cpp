bool detectLoop(Node *head)
{
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