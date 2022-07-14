#include <iostream>
#include <bits/stdc++.h> //strings vector
using namespace std;

int DecimalToBinary(int n)
{
  int ans = 0;
  int x = 1;
  while (x <= n)
    x *= 2;
  x /= 2;
  while (x > 0)
  {
    int lastDigit = n / x;
    n -= lastDigit * x;
    x /= 2;
    ans = ans * 10 + lastDigit;
  }
  return ans;
}

int32_t main()
{
  int n;
  cin >> n;
  cout << DecimalToBinary(n) << endl;
}