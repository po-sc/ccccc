#include <iostream>
#include <string>
#include <vector>
#include <sstream>
int main() {
    std::string sentence;
    std::cout << "Введите предложение: ";
    std::getline(std::cin, sentence);
    for (char &c : sentence) {
        if (std::ispunct(c)) {
            c = ' ';
        }
    }
    std::istringstream iss(sentence);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }
    if (words.empty()) {
        std::cout << "Предложение не содержит слов." << std::endl;
        return 0;
    }
    std::string lastWord = words.back();
    int countEqual = 0;
    int countLonger = 0;
    for (const std::string &word : words) {
        if (word.length() > lastWord.length()) {
            countLonger++;
        } else if (word == lastWord) {
            countEqual++;
        }
    }
    std::cout << "Количество слов, равных последнему слову: " << countEqual << std::endl;
    std::cout << "Количество слов, больших последнего слова: " << countLonger << std::endl;
    
    return 0;
}


//Цель работы, освоить тексте приёмы тексте реализации алгоритмов поиска образца в тексте.
