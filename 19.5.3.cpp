#include <iostream>
#include <fstream>
#include <string>
#include <vector>
/*
int main() {
    //table of person = person_id name surname total_cash
    std::vector<std::string> name;
    std::vector<std::string> surname;
    std::vector<int> total_cash;

    //table of payment = payment_id payment data person_id
    std::vector<int> payment;
    std::vector<std::string> date;
    std::vector<int> person_id;

    //parsing file
    std::string fileName = "..\\statement.txt";
    std::ifstream file (fileName);
    if (file.is_open())
        while (!file.eof()){
            std::string bufferName ("Empty"),bufferSurname ("Empty"), bufferData("Empty");
            int bufferPerson_id = -1, bufferPayment = 0;
            file >> bufferName >> bufferSurname >> bufferPayment >> bufferData;
            for (int i = 0; i < surname.size(); ++i) {
                if (surname[i] == bufferSurname and name[i] == bufferName)
                    bufferPerson_id = i;
            }
            if (bufferPerson_id == -1){
                surname.push_back(bufferSurname);
                name.push_back(bufferName);
                total_cash.push_back(bufferPayment);
                bufferPerson_id = surname.size();
            }
            else
                total_cash[bufferPerson_id] += bufferPayment;
            payment.push_back(bufferPayment);
            date.push_back(bufferData);
            person_id.push_back(bufferPerson_id);
        }
    else{
        std::cout << "Open file error!" << std::endl;
        return -1;
    }
    file.close();

    //query
    int maxTotal_cash = 0;
    long long allCash = 0;
    int bufferPerson_id = 0;
    for (int i = 0; i < total_cash.size(); ++i){
        if (total_cash[i] > maxTotal_cash){
            maxTotal_cash = total_cash[i];
            bufferPerson_id = i;
        }
        allCash += total_cash[i];
    }
    std::cout << "Общее количество выплаченных средств - " << allCash << std::endl;
    std::cout << "Человек с максимальной суммой выплат - " << surname[bufferPerson_id] << " " << name[bufferPerson_id] << std::endl;
    std::cout << "Его выплаты составили - " << maxTotal_cash << std::endl;

    return 0;
}
*/