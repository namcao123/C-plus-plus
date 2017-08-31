// Implementation of heap sort
//Reference: 1)Geeksforgeeks.org. 2) The algorithm design manual

#include <iostream>
#include <string>

using namespace std;


void heapify(int a[], int n, int i)
{
            int root_index = i;
            int l = 2*i + 1;
            int r = 2*i + 2;
            
            //if left child/ right chidl is larger than root
            if( l < n && a[l] > a[root_index]) root_index = l;
            if ( r < n && a[r] > a[root_index]) root_index = r;
            //if a[root_index] is not root
            if ( root_index != i)
            {
                        swap(a[i], a[root_index]);
                        heapify(a, n, root_index);
            }   
}

//heap sort function

void heap_sort(int a[], int n)
{
            for (int i = n/2 -1; i >= 0; i--)
                    heapify(a, n, i);
            
            for (int i = n-1; i >= 0; i--)
            {
                    swap(a[0], a[i]);
                    heapify (a, i, 0);
            }
}


int main()
{
    int a[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(a)/sizeof(a[0]);
    heap_sort(a, n);
    for (int i = 0; i < n; i++)
    cout << a[i] << " ";
    
    return 0;
}