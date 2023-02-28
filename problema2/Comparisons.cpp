#include "Comparisons.h"
#include <cstring>

int cmpName(char* n1, char* n2)
{
    if (strcmp(n1, n2) == 0)
        return 0;
    if (strcmp(n1, n2) < 0)
        return -1;
    return 1;
}

int cmpMGrade(float x, float y)
{
    if (x == y)
        return 0;
    if (x < y)
        return -1;
    return 1;
}

int cmpEGrade(float x, float y)
{
    if (x == y)
        return 0;
    if (x < y)
        return -1;
    return 1;
}

int cmpHGrade(float x, float y)
{
    if (x == y)
        return 0;
    if (x < y)
        return -1;
    return 1;
}

int cmpAvgGrade(float x, float y)
{
    if (x == y)
        return 0;
    if (x < y)
        return -1;
    return 1;
}
