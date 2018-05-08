//
//

#pragma once
#include <random>



class PairOfDice
{
public:
	PairOfDice();
	
	int roll();
	bool isGoToJail();


private:
	int numberOfConsecutiveDoubles;

	std::random_device rd; //seed default random engine
	std::default_random_engine dre;



};

