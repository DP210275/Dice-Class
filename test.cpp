#include "Dice.h"

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));

    Dice myDice;

    cout << myDice.Roll() << endl;
    cout << myDice.Roll() << endl;
    cout << myDice.Roll() << endl;

    myDice.FixedRoll("rolls.txt");

    myDice.OutputFixed();

    return 0;
}