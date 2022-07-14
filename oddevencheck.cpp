#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == (n & ~(1)))
    {
        cout << "even num\n";
    }
    else
    {
        cout << "odd num\n";
    }
    return 0;
}
