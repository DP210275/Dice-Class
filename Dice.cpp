#include "Dice.h"

int Dice::Roll() {
    roll = rand() % MAX_SIDES + 1;
    return roll;
}

void Dice::FixedRoll(std::string file) {
    inFile.open(file);
    while (getline(inFile, fixed, '\n')) {
        //std::cout << "Before: " << fixed << std::endl;
        fix = stoi(fixed);
        //std::cout << "After: " << fix << std::endl;
        fixedRolls.push_back(fix);
    }
    inFile.close();
}

void Dice::OutputFixed () {
    
    for (long unsigned int i = 0; i < fixedRolls.size(); i++) {
        std::cout << fixedRolls[i] << std::endl;
        //std::cout << "test" << std::endl;
    }
    return;
}