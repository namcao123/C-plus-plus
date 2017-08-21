#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Node {
  int data;
  Node * next;
};

void printList(struct Node *n)
{
  while(n != NULL)
  {
      cout << n->data << " ";
      n = n->next;
  }
}

int main()
{
  Node * head = new Node;
  Node * second = new Node;
  Node * third = new Node;

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 4;
  third->next = NULL;

  printList(head);

  return 0;
}
