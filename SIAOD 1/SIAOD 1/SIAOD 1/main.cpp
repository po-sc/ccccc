//    int* delFirstMetod(int* x, int& n, int key) {
//        int j = 0; //1
//        for(int i = 0; i < n; i++) { //n
//            x[j] = x[i]; //n
//            if (x[i] != key){ //n
//                j++; //n
//            }
//        }
//        n = j; //1
//        return x; //1
//    }

//
//#include <iostream>
//
//int main() {
//    int array[100];
//    int n, max_value = 0, count = 0;
//
//    // Заполнение массива
//    std::cout << "Введите размер массива: ";
//    std::cin >> n;
//
//    std::cout << "Введите элементы массива: ";
//    for (int i = 0; i < n; ++i) {
//        std::cin >> array[i];
//        if (array[i] > max_value) {
//            max_value = array[i];
//        }
//    }
//
//    // Подсчет количества максимальных значений
//    for (int i = 0; i < n; ++i) {
//        if (array[i] == max_value) {
//            ++count;
//        }
//    }
//
//    // Вывод результата
//    std::cout << "Максимальное значение: " << max_value << std::endl;
//    std::cout << "Количество максимальных значений: " << count << std::endl;
//
//    return 0;
//}
//

class X {
public:
    int set(int) const;
};

int X::set(int x) const {
    // implementation of the set method
    return x + 1;
}

int _X_set(const X* obj, int x) {
    // implementation of the _X_set function
    return obj->set(x) - 1;
}

int main() {
    X myX;
    int result1 = myX.set(5);        // calling X::set method
    int result2 = _X_set(&myX, 5);  // calling _X_set function
    return 0;
}

