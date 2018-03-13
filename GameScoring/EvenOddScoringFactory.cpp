#include "EvenOddScoringFactory.h"
#include "EvenOddScoring.h"


EvenOddScoringFactory::EvenOddScoringFactory()
{
}

IScoring* 
EvenOddScoringFactory::newScoring()
{
	return new EvenOddScoring();
	//return nullptr;
}

EvenOddScoringFactory::~EvenOddScoringFactory()
{
}
