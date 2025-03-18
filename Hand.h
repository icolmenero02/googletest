// Hand.h
#ifndef HAND_H
#define HAND_H

#include <vector>
#include "Card.h"

class Hand {
public:
    Hand();
    void AddCard(const Card& card);
    bool BlackJack() const;
    int BestScore() const;
    bool Busted() const;
    bool MustHit() const;
    void ClearHand();

private:
    std::vector<Card> cards;
};

#endif // HAND_H
