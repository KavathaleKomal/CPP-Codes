#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, position, set;
    cin >> n >> position >> set;
    int k = (n & ~(1 << position - 1)) | (set << position - 1);
    cout << k;
}