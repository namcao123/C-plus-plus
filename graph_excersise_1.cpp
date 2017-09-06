//implement directed gragh using adjacency matrix
//4 nodes, 5 edges
//edges(1,2), (2,4), (3,1), (3,4), (4,2)
//Reference: hackerearth

#include <iostream>

using namespace std;

bool A[10][10];


void initilize()
{
    for (int i = 0; i < 10; i++)
    {
            for (int j = 0; j < 10; j ++)
                A[i][j] = false;
    }
}

int main()
{
    int x, y, nodes, edges;
    initilize();
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
            cin >> x >> y;
            A[x][y] = true;
    }
    if(A[3][4] == true) cout << " There is a edge between 3 and 4 " << endl;
    else 
          cout << "There is no edge between 3 and 4" << endl;

      return 0;
    
}