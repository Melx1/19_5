#include <iostream>
#include <fstream>
#include <string>
/*
int countWord(std::istream & stmRef, const std::string & word){
    if (word.length() == 0)
        return -1;
    std::string currentWord;
    int wordCounter = 0;
    while (!stmRef.eof()) {
        stmRef >> currentWord;
        if (currentWord == word)
            ++wordCounter;
    }
    return wordCounter;
}

int main() {
    std::string fileName = "..\\words.txt";
    std::string word = "four";

    std::ifstream words (fileName);
    if (words.is_open())
        std::cout << countWord(words, word) << std::endl;
    else
        std::cout << "Не удалось открыть файл" << std::endl;
    words.close();
    return 0;
}
*/