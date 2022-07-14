#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }
        // maxNumber = max(maxNumber, arr[i]);
        // minNumber = min(minNumber, arr[i]);
    }
    cout << "Maximum of array " << maxNumber << endl;
    cout << "Minimum of array " << minNumber << endl;

    return 0;
}