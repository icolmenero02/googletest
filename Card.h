#ifndef CARD_H
#define CARD_H

class Card {
public:
    Card(int value) : iValue(value) {}
    int GetValue() const { return iValue; }

private:
    int iValue;
};

#endif // CARD_H
