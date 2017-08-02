//Pointer to pointer

#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;



int main()
{
    int a  = 10;
    int *p;
    int **q;
    int ***k;
    
    p = &a;
    q = &p;
    k = &q;
    
    cout << &a << endl;
    cout << p << endl;
    cout << &p <<endl;
    cout << q << endl;
    cout << &q << " " << k << endl;
    return 0;
}
