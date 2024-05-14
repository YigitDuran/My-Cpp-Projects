#ifndef OOP_PART3_PAGE3_EXPERIMENT_H
#define OOP_PART3_PAGE3_EXPERIMENT_H

class experiment
{
public:
    experiment();
    explicit experiment(int measurementCount);
    ~experiment();

    experiment& addMeasurement(double measurement);
    void printMeasurements() const;

private:
    int measurementCount;
    double* measurements;
    int measurementIndex;
};

#endif //OOP_PART3_PAGE3_EXPERIMENT_H