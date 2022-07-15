#include <bits/stdc++.h>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }  
        cout<<"memory free for node with data "<< value <<endl;
    }

};

void insertNode(Node* &tail, int element, int d) {

    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list
        // assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next; // curr ko aage badhate raho
        }
        // element found
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }

}

void print(Node* &tail) {

    Node* temp = tail;
    
    // empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    
    do{
        cout << tail->data << " "; 
        tail = tail->next;
    } while(tail != temp);

    cout<<endl;

}

void deleteNode(Node* &tail, int value) {

    // empty list
    if(tail == NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        // non-empty wala case
        // assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value) {
            prev = prev->next;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 Node Linked List
        if(curr == prev){
            tail = NULL;
        }

        if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
    
}

bool isCircular(Node* head)
{
    // empty list
    if (head == NULL){
        return true;
    }
    // 1 node
    if (head->next == NULL){
        return false;
    }
    // >1 node
    Node *temp = head->next;
    while (temp != NULL && temp != head){
        temp = temp->next;
    }
    if (temp == head){
        return true;
    }
    
    return false;
}

int main()
{   
    Node* tail = NULL;

    print(tail);

    // empty list mai insert karre hai
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    // insertNode(tail,5,7);
    // print(tail);

    // insertNode(tail,7,9);
    // print(tail);
 
    // deleteNode(tail,5);
    // print(tail);

    if(isCircular(tail)){
        cout << "Linked list is circular" << endl;
    }
    else
    {
        cout << "linked list is not circular" << endl;
    }

    return 0;
}