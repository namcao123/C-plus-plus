
/*
 Implementation of stacks
 //we can implement stack using array or linkedlist
 */
#include <iostream>
#include <set>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

#define MAX_SIZE 101

int top = -1;
int A[MAX_SIZE];


void Push(int x)
{
    if (top == MAX_SIZE - 1)
    {
        cout << ("Error: stack overflow");
        return ;
    }
    A[++top] = x;
    
}

int Top()
{
    return A[top];
}

void Pop()
{
    if (top == -1)
    {
        cout << "Error: No element to print" << endl;
        return ;
    }
    top--;
    
}

void Print()
{
    int i;
    cout << "Stack: ";
    for (i = 0; i <= top; i++)
        cout << A[i] << " ";
}
int main()
{
    
    Push(2); Print();
    Push(3); Print();
    Push(10); Print();
    Pop();Print();
    
    return 0;
    
}
