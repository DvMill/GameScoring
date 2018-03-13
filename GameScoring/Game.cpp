#include "Game.h"
#include "IScoring.h"
#include "IScoringFactory.h"
#include "Hand.h";

Game::Game(IScoringFactory * ScoreType)
{
	_score = ScoreType->newScoring();
}

int 
Game::playGame1()
{
	Hand *hands = new  Hand(7,4,6,3,5,2,2);
	hands->sortCards();
	return _score->getScore(hands);
}

int 
Game::playGame2()
{
	Hand *bands = new  Hand(10,13,10,13,9,9,10);
	bands->sortCards();
	return _score->getScore(bands);
}

Game::~Game()
{
	delete _score;
}
