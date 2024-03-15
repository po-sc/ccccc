#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Структура для хранения информации о студенте
struct Student {
    int studentID;
    int groupNumber;
    string fullName;
};
// Класс хеш-таблицы с цепочным хешированием
class HashTable {
private:
    static const int tableSize = 10; // Размер таблицы
    vector<vector<Student>> table;
    // Хеш-функция, которую можно настраивать
    int hashFunction(int key) {
        return key % tableSize;
    }
public:
    HashTable() {
        table.resize(tableSize);
    }
    // Метод для вставки студента
    void insertStudent(Student student) {
        int index = hashFunction(student.studentID);
        table[index].push_back(student);
    }
    // Метод для поиска студента по ключу (studentID)
    void findStudent(int studentID) {
        int index = hashFunction(studentID);
        for (const Student& student : table[index]) {
            if (student.studentID == studentID) {
                cout << "Student found: " << "Name: " << student.fullName << ", Group: " << student.groupNumber << endl;
                return;
            }
        }
        cout << "Student not found." << endl;
    }
    // Метод для удаления студента по ключу (studentID)
    void deleteStudent(int studentID) {
        int index = hashFunction(studentID);
        vector<Student>& chain = table[index];
        for (auto it = chain.begin(); it != chain.end(); ++it) {
            if (it->studentID == studentID) {
                chain.erase(it);
                cout << "Student deleted." << endl;
                return;
            }
        }
        cout << "Student not found." << endl;
    }
    // Метод для вывода содержимого таблицы
    void printTable() {
        for (int i = 0; i < tableSize; ++i) {
            cout << "Index " << i << ": ";
            for (const Student& student : table[i]) {
                cout << "Student ID: " << student.studentID << ", ";
                cout << "Group: " << student.groupNumber << ", ";
                cout << "Name: " << student.fullName << " -> ";
            }
            if (!table[i].empty()) {
                cout << "NULL";
            }
            cout << endl;
        }
    }
};
int main() {
    HashTable hashtable;
    // Автоматическое заполнение таблицы
    for (int i = 1; i <= 7; ++i) {
        Student student;
        student.studentID = i;
        student.groupNumber = 100 + i;
        student.fullName = "Student " + to_string(i);
        hashtable.insertStudent(student);
    }
    int choice;
    do {
        cout << "Options:\n";
        cout << "1. Insert student\n";
        cout << "2. Find student\n";
        cout << "3. Delete student\n";
        cout << "4. Print table\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                Student student;
                cout << "Enter Student ID: ";
                cin >> student.studentID;
                cout << "Enter Group Number: ";
                cin >> student.groupNumber;
                cout << "Enter Full Name: ";
                cin.ignore();
                getline(cin, student.fullName);
                hashtable.insertStudent(student);
                break;
            }
            case 2: {
                int studentID;
                cout << "Enter Student ID to find: ";
                cin >> studentID;
                hashtable.findStudent(studentID);
                break;
            }
            case 3: {
                int studentID;
                cout << "Enter Student ID to delete: ";
                cin >> studentID;
                hashtable.deleteStudent(studentID);
                break;
            }
            case 4:
                hashtable.printTable();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}

