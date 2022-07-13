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

void insertNode(Node* tail, int element, int d) {
    
}

int main()
{   
    

    return 0;
}