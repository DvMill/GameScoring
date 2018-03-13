#ifndef H_HAND
#define H_HAND

#include "Card.h"
class Hand
{
private:
	int MIN_HAND_INDEX = 0;
	int MAX_HAND_INDEX = 6;
	Card *_cards[7];
public:
	Hand(int, int, int, int, int, int, int);
	Card* getCard(int);
	int	indexOfSmallestCard(int, int);
	void setCard(int, Card*);
	void swapCards(int, int);
	void sortCards();
	virtual ~Hand();
};
#endif // !HAND_H
