// Input directed gragh using adjcency list
/*
4 vertex, 5 gragh
Edges(1,2), (2,4), (3,1), (3,4), (4,2)
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//maximum of edge in directed gragh with n vertex is n*(n-1)

vector<int> adj[10];

int main()
{
    int x, y, nodes, edges;
    cin >> nodes;
    cin >> edges;
    
    for (int i = 0; i < edges; ++i)
        {
            cin >> x >> y;
            adj[x].push_back(y); // y is adjacency list of x
        }
    
    for (int i = 1; i <= nodes; i++)
    {
            cout << "Adjacency list of node " << i << ": ";
            for (int j = 0; j < adj[i].size(); j++)
            {
                
                    cout << adj[i][j] << " ";
            }
        cout << endl;
    }
    
    return 0;
}