#include <bits/stdc++.h>
using namespace std;

// node class
class Node {

    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

};

void InsertAtHead(Node* &head, int data){
     
    // jabhi koi data aata hai uske liye new node create karlo
    Node * temp = new Node(data);

    // jo nayi node create ki hai uska pointer jo null ko...
    // ...point karra hai usko hata ke head wali node ko point karva do
    temp->next = head;

    // head ko temp pe point karva do
    head = temp; 

}

void InsertAtTail(Node* &tail, int data){   

    // new node create
    Node* temp = new Node(data);

    // tail ke next ko temp pe point karva do
    tail->next = temp;

    // tail ko temp pe point karva do
    tail = temp;
}   

void print(Node* &head) {

    Node* temp = head;
    while(temp != NULL){ 
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
} 

int main()
{
    // creating a new node
    Node* node1 = new Node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    // InsertAtHead(head, 12);
    // print(head);

    // InsertAtHead(head,15);
    // print(head);

    InsertAtTail(tail,12);
    print(head);

    InsertAtTail(tail,15);
    print(head);

    return 0;
}
