#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node * next;
};

//Insert a node at the front of linked list, given a reference (pointer to pointer) to the head

void push(Node ** head_ref, int new_data)
{
    //allocate memory for new node
    Node * new_node = new Node;
    //Assign data for new_node
    new_node->data = new_data;
    //Assign new_node hold address which head holds previously
    new_node->next = (*head_ref);
    //Move head to point to the new node
    (*head_ref) = new_node;
}

//Insert new node after prev_node;

void insertAfter(Node* prev_node, int new_data)
{
    // if the given node is null;
    if (prev_node == NULL)
    {
        cout << "given node cannot be NULL" << endl;
        return;
    }
    
    //allocate a new node
    Node * new_node = new Node;
    //assign new node data;
    new_node->data = new_data;
    //Make next of new node as next of prev_node;
    new_node->next = prev_node->next;
    //make prev_node point to new Node;
    prev_node->next = new_node;
}

//append new node at the end/

void append (Node ** head_ref, int new_data)
{
    //allocate a new node
    Node * new_node = new Node;
    Node * last = *head_ref;
    
    //assign data and null poiter for last node
    new_node->data = new_data;
    new_node->next = NULL;
    
    //if linked list is empty
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    //traverse till the end;
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

void printList(struct Node * node)
{
    while(node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{
    Node * head = NULL;
    push(&head, 7);
    
    push (&head, 8);
    push (&head, 9);
    printList(head);
    cout << endl;
    append(&head, 4);
    printList(head);
    cout << endl;
    insertAfter(head->next, 1);
    printList(head);
    
}
