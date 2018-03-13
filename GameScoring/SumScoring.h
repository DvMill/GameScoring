#ifndef H_SUMSCORING
#define H_SUMSCORING

#include"IScoring.h"
class Hand;

class SumScoring : public IScoring {
public:
	 SumScoring();
	 virtual int getScore(Hand*);
	~SumScoring();

};
#endif