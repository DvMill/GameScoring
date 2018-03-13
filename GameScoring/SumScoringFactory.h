#ifndef H_SUMSCORINGFACTORY
#define H_SUMSCORINGFACTORY

#include "IScoringFactory.h"

class SumScoringFactory : public IScoringFactory {
public:
	SumScoringFactory();
	virtual IScoring* newScoring();
	virtual ~SumScoringFactory();
};

#endif