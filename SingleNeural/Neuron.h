#pragma once
#include "RandomWeight.h"
class Neuron
{
private:
	double _weight;
	double _lastError;
public:
	double smoothing;
	Neuron();
	double ProcessInputData(double input);
	double RestoreInputData(double output);
	void Train(double input, double expecterResult);
	double GetLastError();
};

