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

void deleteNode() {

    // empty list
    
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

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    return 0;
}