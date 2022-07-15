#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sum = 0;
  int original_n = n;
  while (n > 0)
  {
    int lasDigit = n % 10;
    sum = sum + pow(lasDigit, 3);
    n = n / 10;
  }
  if (sum == original_n)
  {
    cout << sum << " is armstrong number" << endl;
  }
  else
  {
    cout << sum << " is not an armstrong number" << endl;
  }
  return 0;
}