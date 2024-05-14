#include <iostream>
#include "experiment.h"

//todo: experiment class has a pointer, check rule of three

int main()
{
    experiment e1(3);

    e1.addMeasurement(2.1).addMeasurement(3.2).addMeasurement(4.3).addMeasurement(5.4);
    e1.printMeasurements();

    return 0;
}
