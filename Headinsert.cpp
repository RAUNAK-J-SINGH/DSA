#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void printnode(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    // create a new node
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //insert at head

    Node* head = node1;
    printnode(head);

    insertAtHead(head, 20);
    printnode(head);

    insertAtHead(head, 30);
    printnode(head);
    
    return 0;
  

}
