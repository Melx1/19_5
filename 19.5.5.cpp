#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

void spin (int & segment, const std::bitset<13> & isPlayed){
    int offset;
    std::cout << "Enter an offset: ";
    std::cin >> offset;
    std::fflush(stdin);
    std::cin.clear();
    segment = (segment + offset) % 14;
    while (isPlayed[segment-1]){
        if (segment == 13)
            segment = 1;
        else
            ++segment;
    }
}

int main() {
    /*
    //generator of files
    std::string buff;
    //std::string keyWord ("_question.txt");
    std::string keyWord ("_answer.txt");
    for (int i = 1; i <= 13; ++i){
        if (i < 10)
            buff = std::string("..\\resource_19.5.5\\0") + std::to_string(i) + keyWord;
        else
            buff = std::string("..\\resource_19.5.5\\") + std::to_string(i) + keyWord;

        std::cout << buff << "\n";
        std::ofstream out(buff);
        if (out.is_open())
            //out << "Is this the " << i << " question?\n";
            out << i << "\n";
        else
            std::cout << "File open error!\n";
        out.close();
    }
     */

    std::bitset<13> isPlayed(0);
    int curSegment = 1; // current segment: 1 - 13
    int player = 0;
    int viewer = 0;

    while (player < 6 and viewer < 6){
        spin(curSegment, isPlayed);
        std::cout << "Sector " << curSegment << "\n";

        std:: string bufferStr;
        //question
        if (curSegment < 10)
            bufferStr = std::string("..\\resource_19.5.5\\0") + std::to_string(curSegment) + std::string("_question.txt");
        else
            bufferStr = std::string("..\\resource_19.5.5\\") + std::to_string(curSegment) + std::string("_question.txt");
        std::ifstream fileQuest (bufferStr);
        if (fileQuest.is_open())
            std::cout << fileQuest.rdbuf();
        else{
            std::cout << bufferStr;
            std::cout << " File open error!\n";
            break;
        }
        std::cout.flush();
        fileQuest.close();

        //answer
        std::string playerAnswer;
        if (curSegment < 10)
            bufferStr = std::string("..\\resource_19.5.5\\0") + std::to_string(curSegment) + std::string("_answer.txt");
        else
            bufferStr = std::string("..\\resource_19.5.5\\") + std::to_string(curSegment) + std::string("_answer.txt");
        std::ifstream fileAnswer (bufferStr);
        if (fileAnswer.is_open()){
            fileAnswer >> bufferStr;
            std::cout << "Enter your answer: ";
            std::cin >> playerAnswer;
            if (bufferStr == playerAnswer)
                player++;
            else
                viewer++;
            std::cout << "Score You: " << player << " Viewers: " << viewer << "\n\n";
            isPlayed[curSegment-1] = true;
        }
        else {
            std::cout << bufferStr;
            std::cout << " File open error!\n";
            break;
        }
        fileAnswer.close();
    }

    if (player == 6)
        std::cout << "You won!\n";
    else
        std::cout << "Viewers won.\n";
}
