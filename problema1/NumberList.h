#pragma once
#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
    int numbers[10];
    int count;

public:

    void Init();          // count will be 0
    bool Add(int x);      // adds X to the numbers list and increase the data member count.

    void Sort();          // will sort the numbers vector
    void Print();         // will print the current vector
};

#endif



