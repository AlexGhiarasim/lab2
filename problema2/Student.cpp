#include "Student.h"
#include <stdio.h>
#include <cstring>
#pragma warning(disable:4996)

char* Student::getName()
{
    return name;
}

void Student::setName()
{
    char FirstName[40], LastName[40];
    printf("First Name: ");
    scanf("%s", FirstName);
    printf("Last Name: ");
    scanf("%s", LastName);
    strcpy(name, FirstName);
    strcat(name, " ");
    strcat(name, LastName);
}

float Student::getMGrade()
{
    return MGrade;
}

void Student::setMGrade()
{
    float g = 0;
    printf("What is %s's Math grade? ", name);
    scanf("%f", &g);
    MGrade = g;
}

float Student::getEGrade()
{
    return EGrade;
}

void Student::setEGrade()
{
    float g = 0;
    printf("What is %s's English grade? ", name);
    scanf("%f", &g);
    EGrade = g;
}

float Student::getHGrade()
{
    return HGrade;
}

void Student::setHGrade()
{
    float g = 0;
    printf("What is %s's History grade? ", name);
    scanf("%f", &g);
    HGrade = g;
}

float Student::avgGrade()
{
    return (MGrade + EGrade + HGrade) / 3;
}
