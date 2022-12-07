#include "RandomWeight.h"

double RandomWeight::GetRandomWeight()
{
	static double min = 0;
	static double max = 1;
	return (min + double(rand()) / RAND_MAX * (max - min));
}
