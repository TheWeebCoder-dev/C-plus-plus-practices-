#include <iostream>
using namespace std;

class Node{
    public:
int data;
Node *next;

Node(int data){
    this->data = data;
    this->next = nullptr;
}
};


Node *ReverseList(Node *head){
    Node *curr = head,*prev = nullptr,*next;
    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void Printlist(Node *node){
    while (node != nullptr)
    {
        cout << node->data;
        if (node->next)
            cout << "->";
            node = node->next;
    }
    cout << endl;
}

int main(){
Node *head = new Node(20);
head->next = new Node(30);
head->next->next = new Node(40);

Printlist(head);
head = ReverseList(head);
Printlist(head);

return 0;
}