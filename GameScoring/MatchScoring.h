#ifndef H_MATCHSCORING
#define H_MATCHSCORING

#include "IScoring.h"
class Hand;

class MatchScoring : public IScoring {
public:
	MatchScoring();
	virtual int getScore(Hand*);
	~MatchScoring();
};

#endif