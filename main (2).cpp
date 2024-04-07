#include <iostream>

using namespace std;

// Функція для обчислення чисел Фібоначчі
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Приклад 1
    int n1 = 2;
    cout << "Input: n = " << n1 << endl;
    cout << "Output: " << fibonacci(n1) << endl;

    // Приклад 2
    int n2 = 3;
    cout << "Input: n = " << n2 << endl;
    cout << "Output: " << fibonacci(n2) << endl;

    // Приклад 3
    int n3 = 4;
    cout << "Input: n = " << n3 << endl;
    cout << "Output: " << fibonacci(n3) << endl;

    return 0;
}
