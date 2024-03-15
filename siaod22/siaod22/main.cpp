#include <iostream>
#include <vector>
#include <string>

// Структура для хранения данных
struct LibraryCard {
    int cardNumber; // Номер читательского
    std::string fullName; // ФИО
    std::string address; // Адрес
};

// Класс хеш-таблицы
class HashTable {
private:
    struct HashNode {
        int key;
        LibraryCard value;
        HashNode* next;
    };
    std::vector<HashNode*> table;
    int size;
    int capacity;

    // Хеш-функция
    int hash(int key) {
        return key % capacity;
    }

    // Метод для рехеширования
    void rehash() {
        capacity *= 2;
        std::vector<HashNode*> newTable(capacity, nullptr);
        for (int i = 0; i < table.size(); ++i) {
            HashNode* current = table[i];
            while (current != nullptr) {
                HashNode* next = current->next;
                int index = hash(current->key);
                current->next = newTable[index];
                newTable[index] = current;
                current = next;
            }
        }
        table = newTable;
    }

public:
    HashTable(int initialCapacity = 10) : size(0), capacity(initialCapacity) {
        table.resize(capacity, nullptr);
    }

    // Метод для вставки
    void insert(int key, const LibraryCard& value) {
        int index = hash(key);
        HashNode* newNode = new HashNode{ key, value, nullptr };
        if (table[index] == nullptr) {
            table[index] = newNode;
        }
        else {
            HashNode* current = table[index];
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        size++;
        // Проверяем, нужно ли рехеширование
        if (size >= capacity * 0.7) {
            rehash();
        }
    }

    // Метод для удаления
    void remove(int key) {
        int index = hash(key);
        HashNode* current = table[index];
        HashNode* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                }
                else {
                    prev->next = current->next;
                }
                delete current;
                size--;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Метод для поиска
    LibraryCard* search(int key) {
        int index = hash(key);
        HashNode* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return &(current->value);
            }
            current = current->next;
        }
        return nullptr;
    }

    // Метод для вывода
    void print() {
        for (int i = 0; i < capacity; ++i) {
            HashNode* current = table[i];
            while (current != nullptr) {
                std::cout << "Key: " << current->key
                    << ", Card Number: " << current->value.cardNumber
                    << ", Name: " << current->value.fullName
                    << ", Address: " << current->value.address << std::endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable hashtable;

    // Заполнение таблицы начальными данными
    hashtable.insert(1, { 10001, "John", "123 Main St" });
    hashtable.insert(2, { 10002, "Jane", "456 Oak St" });
    hashtable.insert(3, { 10003, "Dog", "765 Pine St" });
    hashtable.insert(4, { 10004, "Smith", "829 Qwer St" });
    hashtable.insert(5, { 10005, "Num", "346 Tree St" });

    int choice;
    while (true) {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Вставить запись" << std::endl;
        std::cout << "2. Удалить запись" << std::endl;
        std::cout << "3. Найти запись" << std::endl;
        std::cout << "4. Вывести таблицу" << std::endl;
        std::cout << "5. Выход" << std::endl;

        std::cin >> choice;
        switch (choice) {
        case 1: {
            int key, cardNumber;
            std::string fullName, address;
            std::cout << "Введите ключ, номер читательского, ФИО и адрес через пробел:" << std::endl;
            std::cin >> key >> cardNumber;
            std::cin.ignore(); // Очищаем буфер для строки
            std::getline(std::cin, fullName);
            std::getline(std::cin, address);
            hashtable.insert(key, { cardNumber, fullName, address });
            break;
        }
        case 2: {
            int key;
            std::cout << "Введите ключ для удаления:" << std::endl;
            std::cin >> key;
            hashtable.remove(key);
            break;
        }
        case 3: {
            int key;
            std::cout << "Введите ключ для поиска:" << std::endl;
            std::cin >> key;
            LibraryCard* result = hashtable.search(key);
            if (result != nullptr) {
                std::cout << "Найдено: Card Number: " << result->cardNumber
                    << ", Name: " << result->fullName
                    << ", Address: " << result->address << std::endl;
            }
            else {
                std::cout << "Запись не найдена." << std::endl;
            }
            break;
        }
        case 4:
            hashtable.print();
            break;
        case 5:
            return 0;
        default:
            std::cout << "Неверный выбор. Пожалуйста, выберите действие от 1 до 5." << std::endl;
            break;
        }
    }

    return 0;
}
