#include <iostream>
#include "RandomWeight.h"
#include "Neuron.h"
int main()
{
    srand(time(NULL));
    double input = 8287.73;
    double output = 131;
    Neuron neuron;
    neuron.smoothing = 0.0001;
    int i = 1;
    while(neuron.GetLastError() > neuron.smoothing || neuron.GetLastError() < (-neuron.smoothing) )
    {
        neuron.Train(input, output);
        //if (i % 1000000 == 0) std::cout << neuron.GetLastError() << std::endl;
        // i++;
    }
    std::cout << neuron.ProcessInputData(1000) << std::endl;;
    std::cout << neuron.RestoreInputData(1000) << std::endl;;
}

