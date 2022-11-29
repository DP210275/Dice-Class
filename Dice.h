/*
David Pittman
CSCI 330
Dice Class for J/Z
*/

#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

/*TO DO:
Clearing the vector,
Testing,
*/

const int MAX_SIDES = 6;

class Dice {
    public:
    int Roll();
    void FixedRoll(std::string filename);
    void OutputFixed();

    private:
    int roll;
    int fix;
    std::string fixed;
    std::vector<int> fixedRolls;
    std::ifstream inFile;

};