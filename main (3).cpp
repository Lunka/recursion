#include <iostream>

using namespace std;

// Функція для обчислення унікальних комбінацій сходження по сходах
int climbStairs(int n) {
    if (n <= 2)
        return n;
    else
        return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    // Приклад 1
    int n1 = 2;
    cout << "Input: n = " << n1 << endl;
    cout << "Output: " << climbStairs(n1) << endl;

    // Приклад 2
    int n2 = 3;
    cout << "Input: n = " << n2 << endl;
    cout << "Output: " << climbStairs(n2) << endl;

    return 0;
}
