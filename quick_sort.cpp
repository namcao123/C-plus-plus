//Implement quick_sort

#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
        int temp = *x;
        *x = *y;
        *y = temp;
}

//l,h are low and high index;
int partition( int a[], int l, int h)
{


        int pivot = a[h];
        int i = l - 1;
        for (int j = l; j <= h - 1 ; j ++)
        {
                if (a[j] <= pivot)
                {
                        i++;
                        swap (&a[i], &a[j]);
                }
        }
        swap (&a[i+1], &a[h]);
        return (i+1);
}


void quick_sort(int a[], int l, int h)
{
        //index of partition
        if (l < h)
        {
                int p = partition(a,l,h);
                quick_sort(a,l,p-1);
                quick_sort(a,p+1, h);
        }
}

int main()
{

  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  quick_sort(arr, 0, n-1);
  for (int i = 0; i < n; i++)
  cout << arr[i] << " ";

  return 0;
}
