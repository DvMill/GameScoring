#include "SumScoring.h"
#include "Hand.h"

SumScoring::SumScoring()
{
}

int SumScoring::getScore(Hand *temp)
{
	int rtn=0;
	for (int i = 0; i < 7; i++)
		rtn += temp->getCard(i)->getRank();
	return rtn;
}

SumScoring::~SumScoring()
{
}
