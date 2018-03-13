#ifndef H_ISCORING
#define H_ISCORING
class Hand;

class IScoring {
public:
	virtual int getScore(Hand*)=0;
	 ~IScoring() {}
private:

};

#endif