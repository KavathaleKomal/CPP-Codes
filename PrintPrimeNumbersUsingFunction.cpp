#include <iostream>
#include <math.h>
using namespace std;
bool IsPrime(int num);

bool IsPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (IsPrime(i))
        {
            cout << i << endl;
        }
    }
}