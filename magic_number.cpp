#include <iostream>
#include <math.h>
using namespace std;

void MAGIC(int z)
{
    int reverse(int z);
    int LastDigit, sum = 0, oriNumber;
    oriNumber = z;

    while (z > 0)
    {
        LastDigit = z % 10;
        sum += LastDigit;
        z /= 10;
    }
    int REV = reverse(sum);
    if (sum * REV == oriNumber)
    {
        cout << oriNumber << endl;
    }
}
int reverse(int z)
{
    int LastDigit, sum = 0;
    while (z > 0)
    {
        LastDigit = z % 10;
        sum = sum * 10 + LastDigit;
        z /= 10;
    }
    return sum;
}
int main()
{
    for (int i = 1; i < 10000; i++)
    {
        MAGIC(i);
    }
}