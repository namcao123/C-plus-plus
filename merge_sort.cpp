//Implement merge_sort
//Reference : geeksforgeeks

#include <iostream>

using namespace std;

void merge(int a[], int l, int m, int r)
{
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;

        //create temp arrays//

        int L[n1], R[n2];

        //copy data to temp arrays
        for (i = 0; i < n1; i++)
        {
              L[i] = a[l+i];
        }

        for (j = 0; j < n2; j++)
        {
                R[j] = a[m + 1 + j];
        }

        //merge two temps arrays
        i = 0; j = 0; k = l;
        while(i < n1 & j < n2)
        {
                if (L[i] <= R[j])
                {
                        a[k] = L[i];
                        i++;
                }
                else
                {
                        a[k] = R[j];
                        j++;
                }
                k++;
        }

        //copy the remaining elements in two temps halves array;
        while (i < n1)
        {
                a[k] = L[i];
                i++;
                k++;
        }

        while( j < n2)
        {
                a[k] = R[j];
                j++;
                k++;
        }
}

//l and r are index of array
int merge_sort(int a[], int l, int r)
{
  if(l < r) {

  int m = l + (r-l)/2;// same as (l+r)/2 but avoid overflow

  //sort first and second halves

  merge_sort(a, l, m);
  merge_sort(a, m+ 1, r);

  //merge two halves
  merge(a, l, m, r);
  }

}

int main()
{

  int a[6] = {1, 3, 4, 42, 8, 11};
  merge_sort (a, 0, 5);
  for (int i = 0; i < 6; i ++)
  cout << a[i] << " ";

  return 0;
}
