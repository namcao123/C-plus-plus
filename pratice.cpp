
#include <iostream>
#include <set>
#include <string>

using namespace std;

void swap(int *xp; int *xp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped  = false;
        for (j = 0; j < n - i - 1; j ++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (swapped = false) break;
    }
}

int main()
{
    
    
    return 0;
}
