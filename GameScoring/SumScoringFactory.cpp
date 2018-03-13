#include "SumScoringFactory.h"
#include "SumScoring.h"

SumScoringFactory::SumScoringFactory()
{
}

IScoring * 
SumScoringFactory::newScoring()
{
	return new SumScoring();
}

SumScoringFactory::~SumScoringFactory()
{
}
