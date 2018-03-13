#ifndef H_EVENODDSCORINGFACTORY
#define H_EVENODDSCORINGFACTORY

#include "IScoringFactory.h"

class EvenOddScoringFactory: public IScoringFactory 
{
public:
	EvenOddScoringFactory();
	virtual IScoring* newScoring();
	virtual ~EvenOddScoringFactory();
};

#endif