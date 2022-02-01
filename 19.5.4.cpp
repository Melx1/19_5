#include <iostream>
#include <fstream>
#include <string>
/*
int main() {
    std::string fileName;

    std::cout << "Input full file name: ";
    std::cin >> fileName;

    if (fileName.substr(fileName.size()-3) != "png"){
        std::cout << "The file is not PNG" << std::endl;
        return 0;
    }

    std::ifstream file (fileName, std::ifstream::binary);
    if (file.is_open()){
        char buffer[4];
        file.read(buffer, sizeof(buffer));
        if (buffer[0] != -119 or buffer[1] != 'P' or buffer[2] != 'N' or buffer[3] != 'G'){
            std::cout << "The file is not PNG" << std::endl;
            file.close();
            return 0;
        }
        std::cout << "The file is PNG" << std::endl;
    }
    else
        std::cout << "Open file error!" << std::endl;
    file.close();

    return 0;
}
*/