#pragma once
#include <stdint.h>

typedef uint8_t Rank;
enum {
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

typedef uint8_t Suit;
enum {
    SPADE,
    HEART,
    DIAMOND,
    CLUB
};

struct Card {
    Rank rank;
    Suit suit;  
};