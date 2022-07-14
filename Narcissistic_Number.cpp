#include <iostream>
#include <math.h>
using namespace std;

void Narci(int z)
{
    int LastDigit, sum = 0, oriNumber;
    oriNumber = z;

    while (z > 0)
    {
        LastDigit = z % 10;
        sum += pow(LastDigit, 3);
        z /= 10;
    }
    if (sum == oriNumber)
    {
        cout << oriNumber << endl;
    }
}
int main()
{
    for (int i = 1; i < 10000; i++)
    {
        Narci(i);
    }
}