#include "PairOfDice.h"


PairOfDice::PairOfDice():
	dre(PairOfDice::rd())
{
	

}

int PairOfDice::roll()
{
	std::uniform_int_distribution<int> di(1, 6);
	int roll1 = di(dre);
	int roll2 = di(dre);

	//if already three doubles, reset to zero
	//beacuse if the are rolling again they must
	//have been to jail and gotten ot

	numberOfConsecutiveDoubles = (roll1 != roll2 || numberOfConsecutiveDoubles==3) ?
		0 :
		numberOfConsecutiveDoubles + 1;

	return roll1+roll2;
}

bool PairOfDice::isGoToJail()
{

	return (numberOfConsecutiveDoubles==3);
}

