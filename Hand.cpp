#include "Hand.h"

Hand::Hand() {}

void Hand::AddCard(const Card& card) {
    cards.push_back(card);
}

bool Hand::BlackJack() const {
    return (cards.size() == 2 && BestScore() == 21);
}

int Hand::BestScore() const {
    int total = 0;
    bool hasAce = false;

    for (const auto& card : cards) {
        int value = card.GetValue();
        total += value;
        if (value == 1) hasAce = true;
    }

    if (hasAce && total + 10 <= 21) total += 10;
    return total;
}

bool Hand::Busted() const {
    return BestScore() > 21;
}

bool Hand::MustHit() const {
    return BestScore() < 17;
}

void Hand::ClearHand() {
    cards.clear();
}
