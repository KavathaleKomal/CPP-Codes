#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int reverse;
   while (n > 0)
   {
      int lasDigit = n % 10;
      reverse = reverse * 10 + lasDigit;
      n = n / 10;
   }
   cout << reverse << endl;
   return 0;
}