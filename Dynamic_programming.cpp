// Find minimum step that take a number to 1 follow one of these operation.
//Subtract 1 from it. If its divisible by 2, divide by 2.  3.) If its divisible by 3, divide by 3. 
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n; cin >> n;
  int dp[n+1],i;
  dp[1] = 0;
  for (int i = 2; i <= n; i++)
  {
      dp[i] = 1 + dp[i-1];
      if (i%2 == 0) dp[i] = min(dp[i], 1 + dp[i/2]);
      if (i%3 == 0) dp[i] = min(dp[i], 1 + dp[i/3]);
  }
  cout << dp[n] << endl;
}
