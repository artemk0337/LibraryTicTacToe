#pragma once
#include <vector>
#include <string>
#include "settings.hpp"




void startGame();
bool checkWin(const std::vector<std::vector<char>>& board, char symbol);
bool checkDraw(const std::vector<std::vector<char>>& board);

