#include <iostream>
#include "RandomWeight.h"
#include "Neuron.h"
int main()
{
    srand(time(NULL));
    double input = 131;
    double output = 8287.73;
    Neuron neuron;
    neuron.smoothing = 0.1;
    int i = 1;
    while(neuron.GetLastError() > neuron.smoothing || neuron.GetLastError() < (-neuron.smoothing) )
    {
        neuron.Train(input, output);
        if (i % 100 == 0) std::cout << neuron.GetLastError() << std::endl;
        i++;
    }
    std::cout << neuron.ProcessInputData(1000);
}

