#include "Neuron.h"

Neuron::Neuron()
{
	_weight = RandomWeight::GetRandomWeight();
	_lastError = 1;
	smoothing = 0.00001;
}

double Neuron::ProcessInputData(double input)
{
	return input * _weight;
}

double Neuron::RestoreInputData(double output)
{
	return output / _weight;
}

void Neuron::Train(double input, double expecterResult)
{
	double actualResult = input * _weight;
	_lastError = expecterResult - actualResult;
	double correction = _lastError / actualResult * smoothing;
	_weight += correction;
	if (_weight < 0) _weight = -_weight;
}

double Neuron::GetLastError()
{
	return _lastError;
}
