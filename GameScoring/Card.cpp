#include "Card.h"

Card::Card(int rank)
{
	Card::rank = rank;
}

Card::~Card()
{
}

int Card::getRank()
{
	return rank;
}
