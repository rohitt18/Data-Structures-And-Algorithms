class Solution
{
private:
    ListNode *floydDetection(ListNode *head)
    {

        // empty list or 1 node
        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }

        // floyd's algo
        ListNode *slow = head;
        ListNode *fast = head;

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

public:
    ListNode *detectCycle(ListNode *head)
    {

        // empty list
        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }

        ListNode *intersection = floydDetection(head);

        // slow ko dobara head pe dal do and dono ko same speed se bhagao
        ListNode *slow = head;
        while (slow != intersection)
        {
            slow = slow->next;
            intersection = intersection->next;
        }

        // slow == fast
        return slow;
    }
};