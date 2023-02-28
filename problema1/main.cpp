#include <stdlib.h>
#include "NumberList.h"
#include <iostream>
using namespace std;

int main()
{
    NumberList arrayOfNumbers;

    arrayOfNumbers.Init();
    int n = 0;
    int x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
         arrayOfNumbers.Add(x);
    }
       

    arrayOfNumbers.Sort();

    arrayOfNumbers.Print();

    return 0;
}