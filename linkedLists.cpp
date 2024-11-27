

#include<iostream>

struct Node {
    int data;
    Node *next;
};

Node* create() {

    Node *tmp = new Node;
    tmp->data = 10;
    tmp->next = nullptr;
    return tmp;

}


int main() {

    Node *first = create(); // creates our first node

    std::cout << first->data << " " << first->next;

    return 0;
}
