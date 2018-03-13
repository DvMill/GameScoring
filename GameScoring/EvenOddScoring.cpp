#include "EvenOddScoring.h"
#include "Hand.h"

EvenOddScoring::EvenOddScoring()
{
}

int EvenOddScoring::getScore(Hand *temp)
{
	int blo = 0;
	for (int i=0;i<7;i++)
	{
		if (temp->getCard(i)->getRank() % 2 == 1)
			blo--;
		else
			blo += 3;
	}
	return blo;
}

EvenOddScoring::~EvenOddScoring()
{
}
