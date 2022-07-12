#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->prev = NULL; 
        this->next = NULL;
    }   

    // destructor
    ~Node() {
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<< value << endl;
    }

};

// traversing a linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next; // temp ko aage badhate jao
    }cout<<endl;
}

// gives length of a linked list
int getLen(Node* &head){
    int len = 0;
    Node *temp = head;
    while (temp != NULL){
        len++;
        temp = temp->next; // temp ko aage badhate jao
    }
    return len;
}

void insertAtHead(Node* &tail, Node* &head, int data){

    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp; 
        head = temp; 
    }
}

void insertAtTail(Node* &tail, Node* &head, int data){

    if (tail == NULL){
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    // Insert at Start
    if(position == 1){
        insertAtHead(tail,head,d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    // Insert at Last Position
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next->prev = nodeToInsert;

    temp->next = nodeToInsert;

    nodeToInsert->prev = temp;

}

void deleteNode(Node *&head, int position){

    // deleting first or start node
    if (position == 1) {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        // memory free start node
        temp->next = NULL; // jisko bhi delete karre ho usko NULL ko point karva do fir hi delete karo
        delete temp;
    }
    else {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    // Node* node1 = new Node(10);

    Node* head = NULL;
    Node *tail = NULL;

    print(head);
    // cout<<getLen(head)<<endl;

    insertAtHead(tail, head, 11);  
    print(head);
    insertAtHead(tail, head, 12);
    print(head);
    insertAtHead(tail, head, 13);
    print(head);


    insertAtTail(tail, head, 25);
    print(head);



    insertAtPosition(head,tail,2,100);
    print(head);

    insertAtPosition(head,tail,1,101);
    print(head);

    insertAtPosition(head,tail,7,102);
    print(head);

    cout<<"head "<< head->data << endl;
    cout<<"tail "<< tail->data <<endl;


    deleteNode(head,1);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(head,5);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(head,5);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}