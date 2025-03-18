#include "Hand.h"
#include "Card.h"
#include "Logger.h"
#include <iostream>
#include <cassert>
using namespace std;

void TestHand() {
    Hand hand;

    // Test adding cards
    hand.AddCard(Card(0));  // Ace of Spades (iValue = 1)
    hand.AddCard(Card(10)); // Jack of Spades (iValue = 10)

    // Test BlackJack detection
    assert(hand.BlackJack() == true); // BlackJack should be true
    std::cout << "? BlackJack test passed.\n";

    // Test hand score
    assert(hand.BestScore() == 21);
    std::cout << "? BestScore test passed.\n";

    // Test busted hand
    hand.AddCard(Card(9)); // Adds a 9 (Total = 30, should be bust)
    assert(hand.Busted() == true);
    std::cout << "? Busted test passed.\n";

    // Test dealer hitting
    hand.ClearHand();
    hand.AddCard(Card(5)); // 6 of Spades (iValue = 6)
    hand.AddCard(Card(6)); // 7 of Spades (iValue = 7)
    assert(hand.MustHit() == true); // Dealer must hit if under 17
    std::cout << "? MustHit test passed.\n";
}

int main() {
    TestHand();
    std::cout << "All Hand.h tests passed! ?\n";
    return 0;
}
