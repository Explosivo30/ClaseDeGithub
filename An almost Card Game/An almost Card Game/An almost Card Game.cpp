// An almost Card Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum class Suit
{
    Spades,COINS,CUPS,CLUBS
};

class Card
{
    Suit suit;
    int valor;



public:

    Card() {
        suit = Suit::Spades;
        valor = rand() % 12 + 1;
    }

    bool operator==(Card card) const {
        return (suit == card.suit) && (valor == card.valor);
    }
};




int main()
{
    std::cout << "Hello World!\n";
}

