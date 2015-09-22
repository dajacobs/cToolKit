#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// Card structure
struct card {
	const char *face;
	const char *suit;
};

typedef struct card Card;

// Prototypes
void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);