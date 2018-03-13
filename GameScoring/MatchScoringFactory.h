#ifndef H_MATCHSCORINGFACTORY
#define H_MATCHSCORINGFACTORY

#include "IScoringFactory.h"

class MatchScoringFactory : public IScoringFactory {
public:
	MatchScoringFactory();
	virtual IScoring* newScoring();
	~MatchScoringFactory();
};

#endif

