#include "Hand.h"

Hand::Hand(int a, int b, int c, int d, int e, int f, int g)
{
	int i = MIN_HAND_INDEX;
	setCard(i++, new Card(a));
	setCard(i++, new Card(b));
	setCard(i++, new Card(c));
	setCard(i++, new Card(d));
	setCard(i++, new Card(e));
	setCard(i++, new Card(f));
	setCard(i, new Card(g));

	sortCards();
}

Hand::~Hand(void)
{
	for (int i = MIN_HAND_INDEX; i <= MAX_HAND_INDEX; i++)
		delete _cards[i];
}

Card*
Hand::getCard(int index)
{
	if (MIN_HAND_INDEX <= index && index <= MAX_HAND_INDEX)
		return (_cards[index]);
	else
		return 0; // null
}

void Hand::setCard(int index, Card* c)
{
	if (MIN_HAND_INDEX <= index && index <= MAX_HAND_INDEX)
		_cards[index] = c;
}

int Hand::indexOfSmallestCard(int i, int j)
{
	int smallestIndex = i;
	int smallest = getCard(smallestIndex)->getRank();
	i++;
	while (i <= j)
	{
		if (getCard(i)->getRank() < smallest)
		{
			smallestIndex = i;
			smallest = getCard(smallestIndex)->getRank();
		}
		i++;
	}
	return smallestIndex;
}

void Hand::swapCards(int i, int j)
{
	Card* c = getCard(i);
	setCard(i, getCard(j));
	setCard(j, c);
}

void Hand::sortCards()
{
	for (int i = MIN_HAND_INDEX; i<MAX_HAND_INDEX; i++)
	{
		int j = indexOfSmallestCard(i, MAX_HAND_INDEX);
		if (i != j)
			swapCards(i, j);
	}
}
