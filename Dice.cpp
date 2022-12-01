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

void Dice::OutputFixed() {  
    for (long unsigned int i = 0; i < fixedRolls.size(); i++) {
        std::cout << fixedRolls[i] << std::endl;
        //std::cout << "test" << std::endl;
    }
    return;
}

int Dice::Force(int num) {
    return num;
}

int Dice::GetNext () {
    if (pos == fixedRolls.size()) {
        std::cout << "Error: pos already at end" << std::endl;
        return 0;
    } else {
        pos++;
    }
    return fixedRolls[pos];
}

int Dice::GetPrev() {
    if (pos == 0) {
        std::cout << "Error: pos is 0" << std::endl;
        return 0;
    } else {
        pos--;
    }
    return fixedRolls[pos];
}

int Dice::GetCurrent() {
    return fixedRolls[pos];
}