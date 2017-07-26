
#include <iostream>
#include <set>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

struct Node{
    int data;//4 bytes
    Node* next; //4 bytes
};
//create global variable
struct Node* head;

//create insert function to add element in linked list

void Insert(int x)
{
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

//Create print function to print element of linked list.
void Print()
{
    struct Node* temp = head;
    cout << "List is: ";
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }  
}

int main()
{
    head = NULL; //first head node point to empty
    cout << "How many number in the list: ";
    int n, i, x;
    cin >> n;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter a number: ";
        //cout << endl;
        cin >> x;
        Insert(x);
        Print();
        cout << endl;
    }
    
    return 0;
}
