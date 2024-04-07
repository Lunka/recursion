#include <iostream>
#include <climits> // Для INT_MIN

using namespace std;

// Функція для піднесення числа до ступеня
double myPow(double x, int n) {
    if (n == 0)
        return 1.0;
    
    if (n < 0) {
        x = 1 / x;
        // Перевірка на переповнення
        if (n == INT_MIN)
            return x * myPow(x, -(n + 1)); // Якщо n = INT_MIN, то -(n + 1) не перевищує INT_MAX
        else
            n = -n;
    }
    
    if (n % 2 == 0) {
        double temp = myPow(x, n / 2);
        return temp * temp;
    } else {
        return x * myPow(x, n - 1);
    }
}

int main() {
    // Приклад 1
    double x1 = 2.00000;
    int n1 = 10;
    cout << "Input: x = " << x1 << ", n = " << n1 << endl;
    cout << "Output: " << myPow(x1, n1) << endl;

    // Приклад 2
    double x2 = 2.10000;
    int n2 = 3;
    cout << "Input: x = " << x2 << ", n = " << n2 << endl;
    cout << "Output: " << myPow(x2, n2) << endl;

    // Приклад 3
    double x3 = 2.00000;
    int n3 = -2;
    cout << "Input: x = " << x3 << ", n = " << n3 << endl;
    cout << "Output: " << myPow(x3, n3) << endl;

    return 0;
}
