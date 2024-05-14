// Created by yigit on 7.11.2022.

#ifndef OOP_W4_Q3_MYARRAY_H
#define OOP_W4_Q3_MYARRAY_H

template <class T>
class myArray
{
public:
    myArray();
    explicit myArray(int size);
    myArray(const myArray& that);
    ~myArray();

    void assign_value_at_index(int i, T value);
    T retrieve_value_at_index(int i) const;

    int getSize() const;
    void printArray() const;
private:
    int size;
    T* data;
};

#endif //OOP_W4_Q3_MYARRAY_H