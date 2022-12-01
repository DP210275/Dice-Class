#include "Dice.h"

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));

    Dice myDice;

    cout << "Showcasing 3 random rolls" << endl;
    cout << myDice.Roll() << endl;
    cout << myDice.Roll() << endl;
    cout << myDice.Roll() << endl;

    myDice.FixedRoll("rolls.txt");

    cout << "Outputing fixed roll vector" << endl;
    myDice.OutputFixed();

    cout << "Incrementing/Decrementing list from pos 0" << endl;
    //cout << myDice.GetPrev() << endl;
    cout << myDice.GetNext() << endl;
    cout << myDice.GetPrev() << endl;
    cout << myDice.GetCurrent() << endl;

    return 0;
}