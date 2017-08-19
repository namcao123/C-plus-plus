//Implement breadth first search in c++
//breadth first search: exploring all nodes at given depth before moving to next level.
//BFS uses queus structure to hold all generate but unxplored node.
//producedure: place the starting node s on the queue
//if the queue is empty--> return failure and stop
//if the first node is a goal node, return ok and stop
//Otherwise, remove the first element from queue and place all children on the queue
//reference to code written by Bibek Subedi

#include<iostream>
#include <ctime>
using namespace std;

//class queue - FIFO

struct node {
  int info;
  node *next;
};

class Queue {
private:
  node *front;
  node *rear;
public:
  Queue();
  ~Queue();
  bool isEmpty();
  void enqueue(int);
  int dequeue();
  void display();
};

void Queue::dislay() {
  node *p = new node;
  p = front;
  if (front = NULL)
  {
    cout << "Nothing to display \n";
  }
  else
  {
    while(p != NULL)
    {
        cout << p->info;
        p = p-next;
    }
  }
}

Queue::Queue() {
  front = NULL;
  rear = NULL;
}

Queue::~Queue()
{
  delete front;
}

void Queue::enqueue (int data)
{
  node temp* = new node();
  temp->info = data;
  temp-next = NULL;
  if (front == NULL)
  {
    front = temp;
  }
  else
  {
    rear ->next = temp;
  }
  rear = temp;
}

int Queue::dequeue(){
  node *temp = new node();
  int value;
  if(front == NULL)
  {
    cout << "nQueue is Empty \n";
  }
  else
  {
    temp = front;
    value = temp->info;
    front = front->next;
    delete temp;
  }
  return value;
}

bool Queue::isEmpty() {
  return (front == NULL);
}

// class gragh represent gragh having vertices A and edge E
class Gragh()
{
private:
  int n; // n is number of vertices in the gragh
  int **A; // A stores the edge between to vertices
public:
  Gragh(int size = 2);
  ~Gragh();
  bool isConnected(int, int);
  void addEdge(int u, int v);
  void BFS(int);
};

Gragh::Gragh (int size)
{
  int i, j;
  if (size < 2) n = 2;
  else n = size;
  A = new int*[n];
  for (i = 0; i < n; i++) A[i] = new int [n];
  for (i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      A[i][j] = 0;
}

Gragh::~Gragh()
{
  for (int i = 0 ; i < n; i++)
  delete [] A[i];
  delete [] A;
}

//check if two given verteice are connected by an edge

bool Gragh::isConnected(int u, int v)
{
  return (A[u-1][v-1]==1);
}

//add edge

void Gragh::addEdge(int u, int v)
{
  A[u-1][v-1] = A[v-1][u-1] = 1;
}

// Do BFS
void Gragh::BFS(int s)
{
  Queue Q;
  ///record explored vertices
  bool *explored = new bool[n+1];

  //initilize all vertices as unexplored
  for (int i = 1; i <= n; i++)
  explored[i] = false;

  //push initial vertex to Queue
  Q.enqueue](s);
  explored[s] = true;
  cout << "Breadth first search starting from vertex";
  cout << s << " : "<< endl;

  //unless the queue is Empty

  while(!Q.isEmpty())
  {
    int v = Q.dequeue();
    cout << v << " ";

    for (int w = 1; w <= n; w++)
        if (isConnected (v, w) && explored[w])
        {
          Q.enqueue(w);
          explored[w] = true;
        }
        cout << endl;
        delete [] explored;
  }

}

int main()
{
  Gragh g(12);
  g.addEdge(1,2); g.addEdge(1,3);
  g.addEdge(3, 6); g.addEdge(4 ,7);
  g.addEdge(5, 6); g.addEdge(5, 7);
    clock_t t1;
    t1 = clock();
  g.BFS(1);

  return 0;
}
