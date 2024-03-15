////3.2
///*
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//    //
//    //    double S, n, m, p, r, t = 0, tRound, pr = 10;
//    //    cout << "Введите S, n, m: \n";
//    //    cin >> S >> n >> m;
//    //    if (S <= 0 || n <= 0 || m <= 0){
//    //        cout << "Введены некорректные значения";
//    //        return 0;
//    //    }
//    //    m = int(m*100 + 0.5)/100.0; //Округление до 0.01
//    //    for (p = 1; t < m; p += pr) {
//    //        r = p / 100;
//    //        t = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
//    //        tRound = int(t*100 + 0.5)/100.0;
//    //        if (abs(tRound - m) < 0.01) {
//    //            cout << "p = " << p << endl;
//    //            break;
//    //        }
//    //        else if (tRound > m) {
//    //            t = 0;
//    //            p -= pr;
//    //            pr/= 10;
//    //            if (pr == 0.001) {
//    //                cout << "p = " << p << endl;
//    //                break;
//    //            }
//    //        }
//    //    }
//    //    return 0;
//
//
//    //3.1
//
//
//
//
//    int A;
//    double B;
//    A = 5;
//
//    B = A;
//    if (A == B){
//        cout << "true";
//    }
//    else{
//        cout << "false";
//    }
//}
// */
// /*
// #include <iostream>
// #include <cmath>
//#include <cstdlib>
// using namespace std;
//
//int main() {
//
//     double S, p, n, r, m;
//     cout << "Введите S, p, n: \n";
//     cin >> S >> p >> n;
//     if (S <= 0 || p == 0 || n <= 0){
//     cout << "Введены некорректные значения";
//     return 0;
//     }
//     if (p == 0)
//     {
//     m = S / 12 * n;
//     cout << "Месечная выплата:" << m << endl;
//     }
//     else
//     {
//     r = p/100;
//     m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
//     cout << "m = " << fixed << m << endl;
//     return 0;
//     }
//     }
//     */
//
//    //
//    //    float j=0.1,k=0.2;
//    //    cout << j+k<< endl;
//    //    if (abs((0.1+0.2) - (j+k))<0.01)
//    //    {
//    //
//    //        cout << "yes"<< endl;
//    //    }
//    //    else
//    //    {
//    //        cout << "no"<< endl;
//    //    }
//    //}
//
////    double j=0.1,k=0.2;
////    cout << j+k<< endl;
////    cout << typeid(j+k).name() << endl;
////    cout << typeid(((0.1+0.2)*100)/100).name() << endl;
////    cout << ((j+k)*100)/100 << "\n" << ((0.1+0.2)*100)/100;
////
////    if (0.1+0.2 == j+k)
////        cout << "yes";
////    if (((j+k)*100)/100 ==  ((0.1+0.2)*100)/100)
////
////    {
////
////        cout << " yes"<< endl;
////    }
////    else
////    {
////        cout << " no"<< endl;
////    }
////}
//
//
//
////}
////3.3
///*
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <string.h>
//using namespace std;
////ofstream Test;
//string a;
//int main()
//{
//  //  string file_name;
//    //string file_name_orig = "file1";
//    ofstream fout("/Users/po_scripty/Documents/xcode script/homework/homework 3/homework 3/homework 3/file12");
//    cout << "\nВведите содержимое файла. Для остановки программы, введите Stop:";
//    while (a != "Stop")
//    {
//        cin >> a;
//        if (a != "Stop")
//        {
//            fout << a << endl;
//        }
//    }
//    cout << "\n________________________________________________________________________________________________________________________";
//    fout.close();
//    string line;
//    ifstream fin("/Users/po_scripty/Documents/xcode script/homework/homework 3/homework 3/homework 3/file12");
//    if (fin.is_open())
//    {
//        while (getline(fin, line))
//        {
//            cout << line << endl;
//        }
//    }
//    fin.close();
//}
//*/
////3.4
///*
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//int main()
//{
//    char ax;
//    string fl_name;
//    fl_name = "/Users/po_scripty/Documents/xcode script/homework/homework 3/homework 3/homework 3/3.4";
//    ifstream File;
//    File.open(fl_name);
//    if (!File.is_open())
//    {
//        cout << "Ошибка открытия файла" << endl;
//        File.close();
//    }
//    else
//    {
//        while (File.get(ax))
//        {
//            if (ax >= '0' and ax <= '9')
//
//                    cout << " " << ax;
//        }
//    }
//    cout << endl;
//    File.close();
//}
//
//
// */
////3.5
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    string S;
//    cout << "Введте 30 символов\n";
//    cin >> S;
//    while (S.size() !=30)
//    {
//        cout << "\nВведте 30 символов\n";
//        cin >> S;
//    }
//    char t;
//    for(int b = 0; b <S.size(); b++)
//    {
//        for (int a = 0; a<S.size()-1-b; a++)
//        {
//            if (S[a+1] < S[a])
//            {
//                t = S[a];
//                S[a] = S[a + 1];
//                S[a + 1] = t;
//                cout << S << endl;
//            }
//        }
//    }
//    cout << S << endl;
//    string b;
//    b = "hello world!";
//    cout << b << endl;
//    cout << "Введите b";
//    cin >> b ;
//    cout << b << endl;
//}
//
////qazwsxedcrfvtgbyhnujmiklopqasd
//
////#include <stdio.h>
////#include <cstdlib>
////#include <ctime>
////#include <iostream>
////#include <string>
////
////using namespace std;
////
////
////// arr - массив для перестановки, N - количество элементов в массиве
////void shuffle(int* arr, int N)
////{
////    // инициализация генератора случайных чисел
////    srand(time(NULL));
////
////    // реализация алгоритма перестановки
////    for (int i = N - 1; i >= 1; i--)
////    {
////        int j = rand() % (i + 1);
////
////        int tmp = arr[j];
////        arr[j] = arr[i];
////        arr[i] = tmp;
////    }
////}
////
////int main()
////{
////    srand(time(NULL));
////    int n;
////    int t = 0;
////    cin >> n;
////
////    int * arr = new int[n];
////
////    for (int x = 0; x < n; x++)
////    {
////        arr[x] = rand() % 10 + 1;
////        cout << arr[x] << " ";
////    }
////
////    cout << endl;
////
////    while (true)
////    {
////        t++;
////
////        cout << endl;
////        for (int x = 0; x < n-1; x++)
////        {
////            if (arr[x] > arr[x + 1])
////            {
////                goto cnt;
////            }
////
////        }
////        break;
////
////        cnt:;
////        cout << "Attempt #" << t << ": ";
////        for (int x = 0; x < n; x++)
////        {
////            cout << arr[x] << " ";
////        }
////        cout << endl;
////        shuffle(arr, n);
////    }
////
////    cout << "Result was reached in " << t << " atempts! Congratulations... :/" << endl;
////
////    for (int x = 0; x < n; x++)
////    {
////        cout << arr[x] << " ";
////    }
////
////    return 0;
////}
////
//
//#include <iostream>
//using namespace std;
//
//int print(string s) {
//    cout << s << endl;
//    return 0;
//}
//
//int print(double d) {
//    cout << d << endl;
//    return 0;
//}
//
//int main() {
//    double d = 8.2;
//    string s = "Hello";
//    print(d);
//    print(s);
//}
#include <iostream>
#include <iomanip>

using namespace std;


class Bank {
public:
    string bankid;
    int routeNumber;
    int date;
    string operaion;
    int payment;

    Bank() = default;

    Bank(string bankid, int routeNumber, int date, int payment, float operaion) {
        this->bankid = bankid;
        this->routeNumber = routeNumber;
        this->date = date;
        this->payment = payment;
        this->operaion = operaion;
    }
};

class Node {
public:
    Bank* trip;
    Node* next;
    Node* previous;

    Node(Bank* bank)
    {
        trip = bank;
        next = nullptr;
        previous = nullptr;
    }
};

class LinkedList {
private:
    Node* _head;
    Node* _tail;
    int _count;

public:
    LinkedList() {
        _head = nullptr;
        _tail = nullptr;
        _count = 0;
    }

    void AddLast(Bank* bank) {
        Node* newNode = new Node(bank);
        if (_count == 0) {
            _head = newNode;
        }
        else {
            _tail->next = newNode;
            newNode->previous = _tail;
        }
        _tail = newNode;
        _count++;
    }

    void RemoveAllBybankid(string bankid) {
        Node* current = _head;
        while (current != nullptr)
        {
            if (current->trip->bankid == bankid) {
                if (current == _head) {
                    _head = current->next;
                    if (_head != nullptr)
                        _head->previous = nullptr;
                    else
                        _tail = nullptr;
                }
                else if (current == _tail)
                {
                    _tail = current->previous;
                    _tail->next = nullptr;
                }
                else
                {
                    current->previous->next = current->next;
                    current->next->previous = current->previous;
                }
                _count--;
            }
            current = current->next;
        }
    }

    int CountRides(string bankid, int date) {
        int count = 0;
        Node* current = _head;
        while (current != nullptr) {
            if (current->trip->bankid == bankid && current->trip->date == date)
                count++;
            current = current->next;
        }
        return count;
    }

    void PrintBusSchedule() {
        Node* current = _head;
        cout << left << setw(20) << "BankID"
             << left << setw(10) << "Date"
             << left << setw(10) << "Payment"
             << left << setw(10) << "Routation"
             << endl;

        while (current != nullptr) {
            cout << left << setw(20) << current->trip->routeNumber << left << setw(20) << current->trip->bankid << left << setw(10)
                 << current->trip->date << left << setw(10) << current->trip->payment << left << setw(10) << current->trip->operaion << left << setw(10) << endl;

            current = current->next;
        }
    }
};


int main() {
    system("chcp 1251>null");
    LinkedList* linkedList = new LinkedList();
    
    // bankid, date, payment, operaion
    linkedList->AddLast(new Bank("15.09.2004", 1234567890, 767, 0, 55));
    linkedList->AddLast(new Bank("14.11.2013", 1098765432, 989, 1, 55));
    linkedList->AddLast(new Bank("13.12.2002", 9876543210, 864, 1, 55));
    linkedList->AddLast(new Bank("11.07.2012", 9012345678, 567, 0, 55));
    linkedList->AddLast(new Bank("17.05.2002", 8765432109, 234, 0, 55));
    linkedList->AddLast(new Bank("18.04.2000", 7654321098, 143, 0, 55));
    linkedList->AddLast(new Bank("10.01.2001", 6543210987, 843, 0, 55));
    linkedList->AddLast(new Bank("18.01.2007", 5432109876, 785, 1, 55));
    linkedList->AddLast(new Bank("19.03.2005", 4321098765, 998, 1, 55));
    linkedList->AddLast(new Bank("21.05.2003", 3210987654, 922, 1, 55));
    // сюда добавишь дополнительные записи по образцу сверху
    
    // вывод списка
    linkedList->PrintBusSchedule();
}
//1. 1234567890
//2. 1098765432
//3. 9876543210
//4. 9012345678
//5. 8765432109
//6. 7654321098
//7. 6543210987
//8. 5432109876
//9. 4321098765
//10. 3210987654
