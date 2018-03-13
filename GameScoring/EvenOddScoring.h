#ifndef H_EVENODDSCORING
#define H_EVENODDSCORING

#include "IScoring.h"
#include "Hand.h"

class EvenOddScoring : public IScoring{
public:
	 EvenOddScoring();
	  int getScore(Hand*);
	~EvenOddScoring();
};
#endif