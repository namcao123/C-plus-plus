//Mean, Median, and Mode
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//Function to find the frequence of sorted array

void  calculateMode(double array[], int size)
{
    int counter = 0;
    int max = 0;
    int mode = array[0];
    for( int i = 0; i < size - 1; i++)
    {
            //if second element value equal first element value, so update counter and mode
            if (array[i] == array[i+1])
            {
                    counter ++;
                    if(counter > max)
                    {
                        max = counter;
                        mode = array[i];
                    }
            }
            else 
            counter = 0;
    }
    
    cout << mode << endl;
}

int main()
{
  int n; cin >> n;
  double a[100005];
  double sum = 0;
  for (int i = 0; i < n; i++)
  {
        cin >> a[i];
        sum += a[i];
  }
    
   // print the mean
  cout.precision(1);
  cout << fixed << sum/n << endl;
    
   //print the median
    
  sort(a, a + n);
  if( n%2 == 0) cout << fixed << (a[n/2] + a[n/2 - 1])/2 << endl;
  else cout << fixed << a[n/2] << endl;
  
  // print the mode
  calculateMode(a,n);
}