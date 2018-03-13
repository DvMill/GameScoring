#include "MatchScoringFactory.h"
#include "MatchScoring.h"

MatchScoringFactory::MatchScoringFactory()
{
}

IScoring*
MatchScoringFactory::newScoring()
{
	return new MatchScoring();
}

MatchScoringFactory::~MatchScoringFactory()
{
}
