
#include <iostream>
using namespace std;
#define CHECK_EVENODD(N) ((N % 2 == 0) ? 1 : 0)

int main()
{
	int number;
	cout << "Enter an integer number: ";
	cin >> number;

	if (CHECK_EVENODD(number))
		cout << number << " is even number" << endl;
	else
		cout << number << " is odd number" << endl;
	return 0;
}
