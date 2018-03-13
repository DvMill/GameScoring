#include <string>
#include <iostream>
#include "Game.h";
#include "EvenOddScoringFactory.h";
#include "SumScoringFactory.h"
#include "MatchScoringFactory.h"

using namespace std;

int main(int argc, char* argv[]) 
{
	IScoringFactory* Sndbo = new SumScoringFactory();
	IScoringFactory* Evobo = new EvenOddScoringFactory();
	IScoringFactory* Matbo = new MatchScoringFactory();

	//sumscore
	Game* sumsco = new Game(Sndbo);
	int fss = sumsco->playGame1();
	int sss = sumsco->playGame2();
	cout << "Using SumScoringFactory: " << endl;
	cout <<"Game 1 has a score "<<fss << endl;
	cout <<"Game 2 has a score " << sss << endl;
	cout << endl;
	delete sumsco;

	//oddevenscore 
	Game* oddevensco = new Game(Evobo);
	int foes = oddevensco->playGame1();
	int soes = oddevensco->playGame2();
	cout << "Using EvenOddScoringFactory: " << endl;
	cout << "Game 1 has a score " << foes << endl;
	cout << "Game 2 has a score " << soes << endl;
	cout << endl;
	delete oddevensco;

	//matchscore
	Game* matchsco = new Game(Matbo);
	int fms = matchsco->playGame1();
	int sms = matchsco->playGame2();
	cout << "Using MatchScoringFactory: " << endl;
	cout << "Game 1 has a score " << fms << endl;
	cout << "Game 2 has a score " << sms << endl;
	cout << endl;
	delete matchsco;
	
	system("pause");
	return (0);
}