//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> createPrefixFunction(const string& pattern) {
//    int n = pattern.length();
//    vector<int> prefix(n, 0);
//    for (int i = 1; i < n; i++) {
//        int j = prefix[i - 1];
//        while (j > 0 && pattern[i] != pattern[j]) {
//            j = prefix[j - 1];
//        }
//        if (pattern[i] == pattern[j]) {
//            prefix[i] = j + 1;
//        }
//    }
//    return prefix;
//}
//int findMinimumLength(const string& pattern) {
//    int n = pattern.length();
//    vector<int> prefix = createPrefixFunction(pattern);
//    int minLength = n - prefix[n - 1];
//    
//    return minLength;
//}
//int main() {
//    string input;
//    cout << "Введите подстроку: ";
//    cin >> input;
//    int minLength = findMinimumLength(input);
//    cout << "Минимально возможная длина исходной строки S: " << minLength << endl;
//    return 0;
//}
//
////