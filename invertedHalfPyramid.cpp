#include <iostream>
using namespace std;
int main()
{
  int col;
  cin >> col;
  for (int i = 0; i <= col; ++i)
  {
    for (int j = 1; j <= col - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}