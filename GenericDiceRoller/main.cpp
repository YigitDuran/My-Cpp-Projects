#include <iostream>

template <class T>
class dieV1
{
private:
    int sideCount;
    T* valuesOfSides;
public:
    dieV1(int sc, T* vos) : sideCount(sc)
    {
        valuesOfSides = new T[sideCount];

        for (int i = 0; i < sideCount; ++i)
            valuesOfSides[i] = vos[i];
    }

//    T randomResult()
//    {
//        return valuesOfSides[rand() % sideCount];
//    }

    void printDieValues() const
    {
        for (int i = 0; i < sideCount; ++i)
        {
            std::cout << "side" << i << ": " << valuesOfSides[i] << std::endl;
        }
    }

    ~dieV1() { delete[] valuesOfSides; }
};

template <class T>
class dieV2
{
private:
    int sideCount;
    T* valuesOfSides;
public:
    dieV2() : sideCount(0), valuesOfSides(nullptr) {} //default constructor
    dieV2(int sc, T* vos) : sideCount(sc), valuesOfSides(vos) {}//constructor(int, T*)

//    T randomResult()
//    {
//        return valuesOfSides[rand() % sideCount];
//    }

    void printDieValues() const
    {
        for (int i = 0; i < sideCount; ++i)
        {
            std::cout << "side" << i << ": " << valuesOfSides[i] << std::endl;
        }
    }
};

int main()
{
    int sixDie[6] = {1, 2, 3, 4, 5, 6};
    dieV2<int> dieV2_6(6, sixDie);

    std::cout << "dieV2_6 values:" << std::endl;
    dieV2_6.printDieValues();
    std::cout << std::endl;

    int eightDie[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    dieV2<int> dieV2_8(8, eightDie);

    std::cout << "dieV2_8 values:" << std::endl;
    dieV2_8.printDieValues();
    std::cout << std::endl;

    std::string fourDie[4] = {"hit", "miss", "miss", "miss"};
    dieV2<std::string> dieV2_4(4, fourDie);

    std::cout << "dieV2_4 values:" << std::endl;
    dieV2_4.printDieValues();
    std::cout << std::endl;

    return 0;
}