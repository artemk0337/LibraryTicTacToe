#pragma once
#include <vector>
#include <string>


inline int boardSize = 3;
inline std::string player1 = "User1";
inline std::string player2 = "User2";


void startGame();
bool checkWin(const std::vector<std::vector<char>>& board, char symbol);
bool checkDraw(const std::vector<std::vector<char>>& board);

