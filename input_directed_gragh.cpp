// Input directed gragh
/*
4 vertex, 5 gragh
Edges(1,2), (2,4), (3,1), (3,4), (4,2)
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//maximum of edge in directed gragh with n vertex is n*(n-1)

bool A[10][10];

void initialize()
{
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; j ++)
            A[i][j] = false;
}

int main()
{
    int x, y, nodes, edges;
    initialize(); // initially, there is no edges
    cin >> nodes;
    cin >> edges;
    
    for (int i = 0; i < edges; ++i)
    {
      cin >> x >> y;
      A[x][y]; // mark the edges form vertex x to y
    }
    
    if(A[3][4] == true)
      cout << "There is an edge between 3 and 4" << endl;
    else 
      cout << "There is no edge between 3 and 4" << endl;
}
