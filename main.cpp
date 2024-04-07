#include <iostream>
#include <string>

using namespace std;

// Головна рекурсія
void reverseString(const string& str, int index) {
    if (index < 0)
        return;
    
    cout << str[index];
    reverseString(str, index - 1);
}

// Хвостова рекурсія
void reverseStringTail(const string& str, int index) {
    if (index >= str.length())
        return;
    
    reverseStringTail(str, index + 1);
    cout << str[index];
}

int main() {
    string str = "tiger";
    cout << "Using Head Recursion: ";
    reverseString(str, str.length() - 1);
    cout << endl;

    cout << "Using Tail Recursion: ";
    reverseStringTail(str, 0);
    cout << endl;

    return 0;
}
