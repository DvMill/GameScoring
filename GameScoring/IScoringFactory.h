#ifndef H_ISCOREINGFACTORY
#define H_ISCOREINGFACTORY

class IScoring;

class IScoringFactory {
public:
	virtual IScoring* newScoring() =0;
	virtual ~IScoringFactory() {};
};

#endif