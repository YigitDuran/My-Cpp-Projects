#include <iostream>
#include "myArray.h"

template <class T>
myArray<T>::myArray() : size(0), data(nullptr)
{
    std::cout << "*myArray default constructor*" << std::endl;
}

template <class T>
myArray<T>::myArray(int size) :
size( (size < 0) ? 0 : size ),
data((size < 0) ? nullptr : new T[size])
{
    std::cout << "*myArray 2 parameters constructor*" << std::endl;
}

template <class T>
//do I need checks in size and data initialization same way in the parameterized constructor?
//I think all the necessary checks are made in the initialization of that myArray, I don't think
//my array can be created using something other than default or parameterized constructor.
myArray<T>::myArray(const myArray<T> &that) : size(that.size), data(new T[size])
{
    std::cout << "*myArray copy constructor*" << std::endl;

    for (int i = 0; i < size; ++i)
    {
        data[i] = that.data[i];
    }
}

template <class T>
myArray<T>::~myArray()
{
    delete[] data;
}

template <class T>
void myArray<T>::assign_value_at_index(int i, T value)
{
    if(i < 0)
    {
        std::cout << "Negative index, value did not get assigned." << std::endl;
    }
    else
    {
        if(i < size)
        {
            data[i] = value;
        }
        else
        {
            std::cout << "Index out of bounds, value did not get assigned." << std::endl;
        }
    }
}

template <class T>
T myArray<T>::retrieve_value_at_index(int i) const
{
    if(i < 0)
    {
        return -1;
    }
    else
    {
        if(i < size)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }
}

template <class T>
int myArray<T>::getSize() const
{
    return size;
}

template<class T>
void myArray<T>::printArray() const
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "- " << i+1 << ": " << data[i] << std::endl;
    }
}

