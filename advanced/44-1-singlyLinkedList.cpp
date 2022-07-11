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

    // destructor
    ~Node() {
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
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

void InsertAtPosition(Node* &tail, Node* &head, int position, int data){

    // Insert At Start
    if(position == 1){
        InsertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int count = 1;


    while(count<position-1){
        temp = temp->next;
        count++;
    }

    // Inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail,data);
        return;
    }

    // creating a node for d
    Node* NodeToInsert = new Node(data);

    NodeToInsert->next = temp->next;

    temp->next = NodeToInsert; 

}

void deleteNode(Node* &head, int position) {

    // i want to delete any position (it can be first or last also)
    
    // deleting first or start node 
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL; // jisko bhi delete karre ho usko NULL ko point karva do fir hi delete karo
        delete temp;
    }else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL; // jisko bhi delete karre ho usko NULL ko point karva do fir hi delete karo
        delete curr;
    }

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

    InsertAtPosition(tail, head, 4, 22);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    deleteNode(head,4); 
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    return 0;
}
