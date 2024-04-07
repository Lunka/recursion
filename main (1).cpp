#include <iostream>

using namespace std;

// Структура вузла зв'язаного списку
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Функція для обміну місцями кожних двох сусідніх вузлів
ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next)
        return head;

    ListNode* firstNode = head;
    ListNode* secondNode = head->next;

    // Зв'язуємо перший вузол з наступним вузлом після обміну
    firstNode->next = swapPairs(secondNode->next);
    // Обмін значень між першим та другим вузлом
    secondNode->next = firstNode;

    // Повертаємо нову голову списку
    return secondNode;
}

// Функція для друку зв'язаного списку
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Приклад 1
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);

    cout << "Input: ";
    printList(head1);

    ListNode* newHead1 = swapPairs(head1);

    cout << "Output: ";
    printList(newHead1);

    // Приклад 2
    ListNode* head2 = nullptr;

    cout << "Input: ";
    printList(head2);

    ListNode* newHead2 = swapPairs(head2);

    cout << "Output: ";
    printList(newHead2);

    // Приклад 3
    ListNode* head3 = new ListNode(1);

    cout << "Input: ";
    printList(head3);

    ListNode* newHead3 = swapPairs(head3);

    cout << "Output: ";
    printList(newHead3);

    return 0;
}
