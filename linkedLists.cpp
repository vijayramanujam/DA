


#include <iostream>

struct Node {

    int data;
    Node *next;
};

Node* initialize() {

    Node *head = new Node;
    head->data = 0;
    head->next = nullptr;

    return head; // successfully created first node and returned the pointer to main()
}


void push(Node *head, int elem) { // element passed will be added to the end of the node

    // lets create a temp new node for this element

    Node *tmp = new Node;
    tmp->data = elem;
    tmp->next = nullptr;

    // Our new node is ready to be pushed but where > Let's identify the last node in our LL.

    Node *curr = head; // both first and curr pointing to same node (first node)

    while (curr->next != nullptr) { // keep running we dont reach last node

        curr = curr->next;
    }

    // Now, our curr node is pointing to the last node of our LL.

    curr->next = tmp; // we made the last node of our current node point the new node that we just created.

}


int main() {

    Node *head = initialize();

    return 0;
}
