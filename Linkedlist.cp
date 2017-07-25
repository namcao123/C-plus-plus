
#include <iostream>
#include <set>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

struct Node{
    int data;//4 bytes
    Node* link; //4 bytes
};

int main()
{
    //first node (NULL)
    Node* A;
    A = NULL;// Empty list
    
    //create second node with data = 2 and Null pointer
    Node* temp = new Node();
    temp -> data = 2; // or temp->data = 2; or *temp.data
    temp -> link = NULL;// or temp->link = NULL;
    
    //Link first Node with second node
    A = temp;
    
    //Create third node
    temp = new Node();
    temp -> link = NULL;
    temp -> data = 4;
    
    //Linked second node to third node
    //Traversal of linked list to reach the last node
    //A is never modified...
    
    
    Node *temp1 = A;
    while(temp1 -> link != NULL)
    {
        temp1 = temp1 -> link;
    }
    
    temp1 = temp;
    return 0;
}
