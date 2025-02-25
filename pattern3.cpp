#include <iostream>
using namespace std;

void printPattern(int n) {
    int matrix[n][n];
    for (int k = 0; k < n / 2; ++k) {
        int value = n - k;  // Decrease the value as we move inward
        for (int i = k; i < value; ++i) {
            for (int j = k; j < value; ++j) {
                matrix[i][j] = value;  // Set the value for the current layer
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    std::cout << "Enter an even number n: ";
    std::cin >> n;
    printPattern(n);
    return 0;
}
