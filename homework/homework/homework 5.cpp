//#include <iostream>
//using namespace std;
//int main()
//{
//    system("chep 1251");
//    bool a, b, c;
//    cout << "На улице день?\n";
//    cout << "Да(1)/Нет(0)\n";
//    cin >> a;
//    cout << "Раздвинуты шторы?\n";
//    cout << "Да(1)/Нет(0) \n";
//    cin >> b;
//    cout << "Лампа включена?\n";
//    cout << "Да(1)/Нет(0)\n";
//    cin >> c;
//    if (a == 1 && b == 1|| c == 1) {
//        cout << "В комнате светло";
//    }
//    else {
//        cout << "В комнате темно";
//    }
//}
//
#include <iostream>

int main() {
    double b, c;

    std::cout << "значение b: ";
    std::cin >> b;
    std::cout << "значение c: ";
    std::cin >> c;
    if (b == 0) {
        if (c == 0) {
            std::cout << "Уравнение имеет бесконечно много решений." << std::endl;
        } else {
            std::cout << "Уравнение не имеет решений." << std::endl;
        }
    } else {
        double x = -c / b;
        std::cout << "Решение уравнения: x = " << x << std::endl;
    }
    return 0;
}
