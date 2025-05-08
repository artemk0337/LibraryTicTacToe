#include "history.hpp"
#include <fstream>
#include <iostream>

void showHistory() {
    std::ifstream historyFile("history.txt");
    if (!historyFile) {
        std::cout << "History empty.\n";
        return;
    } else {
        std::cout << "History:\n";
        std::string word;
        while (historyFile >> word) {
            std::cout << word << " "; 
        }
        std::cout << std::endl;
    }
    historyFile.close();
}

void exitProgram() {
    std::cout << "\nProgramm is complited. Bye bye!\n";
}