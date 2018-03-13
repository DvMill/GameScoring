#ifndef H_GAME
#define H_GAME
#include "IScoringFactory.h"
class Game {
public:
	Game(IScoringFactory*);
	virtual int playGame1();
	virtual int playGame2();
	virtual ~Game();
private:
	IScoring* _score;
};

#endif