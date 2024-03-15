#include <iostream>
#include <sstream>
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};
void countValues(Node* head, int& positiveCount, int& negativeCount, int& zeroCount) {
    if (head == nullptr)
        return;
        if (head->data > 0)
        positiveCount++;
    else if (head->data < 0)
        negativeCount++;
    else
        zeroCount++;
    countValues(head->next, positiveCount, negativeCount, zeroCount);
}
int main() {
    std::string input;
    int value;
    Node* head = nullptr;
    Node* current = nullptr;
    // Ввод значений в строку через пробел
    std::cout << "Введите значения элементов через пробел: ";
    std::getline(std::cin, input);
    std::istringstream iss(input);
    while (iss >> value) {
        if (head == nullptr) {
            head = new Node(value);
            current = head;
        } else {
            current->next = new Node(value);
            current = current->next;
        }
    }
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    // Вызов функции для подсчета значений
    countValues(head, positiveCount, negativeCount, zeroCount);
    std::cout << "Количество положительных значений: " << positiveCount << std::endl;
    std::cout << "Количество отрицательных значений: " << negativeCount << std::endl;
    std::cout << "Количество нулевых значений: " << zeroCount << std::endl;
    // Очистка памяти
    current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}


//#include <iostream>
//#include <cstring>
//// функция для переворота строки
//void reverseString(char* str, unsigned long start, unsigned long end) {
//    if (start >= end)
//        return;
//    // Обмен символов между началом и концом строки
//    char temp = str[start];
//    str[start] = str[end];
//    str [end] = temp;
//    // Рекурсивный вызов для следующих символов
//    reverseString(str, start + 1, end - 1) ;
//}
//int main() {
//    // Создание исходной строки
//    char str[] = "Hello, World!";
//    // Вывод исходной строки
//    std::cout << "Исходная строка: " << str << std::endl;
//    // Вызов функции для переворота строки
//    reverseString(str, 0, strlen(str) - 1) ;
//    // Вывод перевернутой строки
//    std::cout << "Перевернутая строка: " << str << std::endl;
//    return 0;
//}
