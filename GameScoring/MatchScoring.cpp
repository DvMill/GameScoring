#include "MatchScoring.h"
#include "Hand.h"
#include "Card.h"

MatchScoring::MatchScoring()
{
}

int MatchScoring::getScore(Hand *temp)
{
	Hand *manip = temp;
	Card *blonk = new Card(-1);
	int FINISHED = 0;
	int Pairct = 0; int Threect = 0; int Fourct = 0; int Fivect = 0; int Sixct = 0; int Sevenct = 0; int ct = 0;
	for (int i = 0; i < 6; i++)
	{
		if (manip->getCard(i)->getRank() != blonk->getRank())
		{
			for (int j = i + 1; j < 7; j++)
			{
				if (manip->getCard(i)->getRank() == manip->getCard(j)->getRank())
				{
					manip->setCard(j, blonk);
					ct++;
				}
			}
		}
		if (ct == 1)
			Pairct++;
		if (ct == 2)
			Threect++;
		if (ct == 3)
			Fourct++;
		if (ct == 4)
			Fivect++;
		if (ct == 5)
			Sixct++; 
		if (ct == 6)
			Sevenct++;
		ct = 0;
	}
	FINISHED = (Pairct * 10) + (Threect * 20) + (Fourct * 30) + (Fivect * 40)+ (Sixct * 50) + (Sevenct * 60);
	return FINISHED;
}

MatchScoring::~MatchScoring()
{
}
