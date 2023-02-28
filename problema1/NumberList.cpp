#include "NumberList.h"
#include <stdio.h>

void NumberList::Init(void)
{
    count = 0;
}

bool NumberList::Add(int x)
{
    if (count < 10)
    {
        numbers[count] = x;
        count++;
        return true;
    }

    return false;
}

void NumberList::Sort(void)
{
    bool sorted = true;

    do {
        sorted = true;

        for (int i = 0; i < count - 1; i++)
            if (numbers[i] > numbers[i + 1])
            {
                int aux = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = aux;
                sorted = false;
            }
    } while (!sorted);
}

void NumberList::Print(void)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d", numbers[i]);
        printf(" ");
    }
}