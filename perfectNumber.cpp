#include <iostream>
#include <math.h>
using namespace std;

int perfect(int z)
{
    int i, sum = 0;
    for (i = 1; i < z; i++)
    {
        if (z % i == 0)
        {
            sum += i;
        }
    }
    if (z == sum)
    {
        cout << z << endl;
    }
    return 0;
}
int main()
{
    for (int i = 1; i < 10000; i++)
    {
        int ans = perfect(i);
    }
}