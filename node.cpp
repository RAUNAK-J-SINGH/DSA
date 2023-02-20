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

int main(){
    Node* Node1 = new Node(10);
    Node* Node2 = new Node(20);
    // cout << Node1 << endl;
    cout << Node1 -> data << endl;
    cout << Node1 -> next << endl;

    cout<< Node2 << endl;
    cout << Node2 -> data << endl;
    cout << Node2 -> next << endl;

}
