//1а

//#include <iostream>
//#include <bitset>
//
//using namespace std;
//
//int main() {
//    int x = 255; // Пример числа (можете использовать любое другое число)
//    const int n = sizeof(int) * 8; // Размер типа int в битах
//
//    cout << "Битовое представление числа " << x << ": ";
//    cout << bitset<n>(x) << endl;
//
//    return 0;
//}

//1б

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int x = 255; // Пример числа (можете использовать любое другое число)
//    int bitToSet = 7; // Номер бита, который вы хотите установить в 1
//
//    // Создаем маску, которая содержит только 7-й бит установленным в 1
//    int mask = 1 << bitToSet;
//
//    // Устанавливаем 7-й бит в 1
//    x |= mask;
//
//    cout << "Число после установки 7-го бита: " << x << endl;
//
//    return 0;
//}


//2а

// #include <iostream>
// 
// void sortWithBitArray(unsigned char input[], int size) {
// unsigned char bitArray = 0;
// 
// // Заполнение битового массива
// for (int i = 0; i < size; i++) {
// bitArray |= (1 << input[i]);
// }
// 
// // Вывод отсортированной последовательности
// for (int i = 0; i <= 7; i++) {
// if (bitArray & (1 << i)) {
// std::cout << i << " ";
// }
// }
// std::cout << std::endl;
// }
// 
// int main() {
// unsigned char input[] = {1, 0, 5, 7, 2, 4};
// int size = sizeof(input) / sizeof(input[0]);
// 
// std::cout << "Исходная последовательность: ";
// for (int i = 0; i < size; i++) {
// std::cout << static_cast<int>(input[i]) << " ";
// }
// std::cout << std::endl;
// 
// std::cout << "Отсортированная последовательность: ";
// sortWithBitArray(input, size);
// 
// return 0;
// }
 



//2в

//#include <iostream>
//#include <vector>
//
//void sortWithBitArray(std::vector<unsigned char>& input) {
//    std::vector<unsigned char> bitArray(64, 0);
//
//    // Заполнение битового массива
//    for (unsigned char num : input) {
//        bitArray[num] = 1;
//    }
//
//    // Вывод отсортированной последовательности
//    for (unsigned char i = 0; i < 64; i++) {
//        if (bitArray[i] == 1) {
//            std::cout << static_cast<int>(i) << " ";
//        }
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    std::vector<unsigned char> input = {1, 0, 5, 7, 2, 4};
//    
//    std::cout << "Исходная последовательность: ";
//    for (unsigned char num : input) {
//        std::cout << static_cast<int>(num) << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "Отсортированная последовательность: ";
//    sortWithBitArray(input);
//
//    return 0;
//}



//3а

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
const int MAX_NUMBER = 9999999; // Максимальное значение числа
const int MIN_NUMBER = 1000000; // Минимальное значение числа
void countingSort(vector<int>& input, const string& outputFileName) {
    vector<int> count(MAX_NUMBER - MIN_NUMBER + 1, 0);
    // Подсчитываем количество каждого числа во входном файле
    for (int num : input) {
        count[num - MIN_NUMBER]++;
    }
    // Записываем отсортированные числа в выходной файл
    ofstream outputFile(outputFileName);
    for (int i = 0; i < count.size(); i++) {
        for (int j = 0; j < count[i]; j++) {
            outputFile << i + MIN_NUMBER << endl;
        }
    }
    outputFile.close();
}
int main() {
    string inputFileName = "/Users/po_scripty/Documents/xcode script/homework/siaod 21/siaod 21/input.txt";
    string outputFileName = "/Users/po_scripty/Documents/xcode script/homework/siaod 21/siaod 21/output.txt";
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cout << "Не удалось открыть входной файл." << endl;
        return 1;
    }
    vector<int> inputNumbers;
    int num;
    // Считываем числа из входного файла
    while (inputFile >> num) {
        inputNumbers.push_back(num);
    }
    inputFile.close();
    // Измеряем время выполнения
    clock_t startTime = clock();
    countingSort(inputNumbers, outputFileName);
    clock_t endTime = clock();
    double executionTime = double(endTime - startTime) / CLOCKS_PER_SEC;
    cout << "Программа выполнена за " << executionTime << " секунд." << endl;
    return 0;
}
