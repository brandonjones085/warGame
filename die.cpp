#include "die.h"
#include <cstdlib>
#include <ctime>

Die::Die()
{
	n = 0;
}

Die::Die(int num)
{
	this->n = num;
	srand(time(NULL));
}

int Die::getN()
{
	return n;
}

int Die::randInt()
{
	int num;
	int n = getN();

	num = std::rand() % n + 1;

	return num;
}
