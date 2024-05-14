#include <iostream>
#include "experiment.h"

experiment::experiment() :
        measurements(nullptr), measurementCount(0), measurementIndex(0)
{}

experiment::experiment(int measurementCount) :
        measurementCount(measurementCount), measurements(nullptr), measurementIndex(0)
{
    if(measurementCount < 0)
    {
        std::cout << "MeasurementCount value cannot be negative, "
                     "MeasurementCount has been set to 0." << std::endl;

        measurementCount = 0;
    }

    measurements = new double[measurementCount];

    for (int i = 0; i < measurementCount; ++i)
    {
        measurements[i] = 0.0;
    }
}

experiment::~experiment()
{
    delete[] measurements;
}

experiment& experiment::addMeasurement(double measurement)
{
    if(measurementIndex < measurementCount)
    {
        measurements[measurementIndex] = measurement;
        ++measurementIndex;
    }
    else
    {
        std::cout << "Measurement list is full. You can't add more "
                     "measurements." << std::endl;
    }

    return *this;
}

void experiment::printMeasurements() const
{
    for (int i = 0; i < measurementIndex; ++i)
    {
        std::cout << "Measurement " << i + 1 << " = " << measurements[i] << std::endl;
    }
}