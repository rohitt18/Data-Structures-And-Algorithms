#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

bool isCircular(Node* head) {
    // empty list
    if(head == NULL) {
        return true;
    }
    // 1 node
    if(head->next == NULL) {
        return false;
    }
    // >1 node
    Node* temp = head->next;
    while(temp!=NULL && temp!=head) {
        temp = temp->next;
    }
    if(temp == NULL){
        return false;
    }
    if(temp==head){
        return true;
    }
}

int main()
{
    Node* head = NULL;

    if(isCircular(head)) {
        cout<<"Linked list is circular"<<endl;
    }
    else{
        cout<<"linked list is not circular"<<endl;
    }

    return 0;
}