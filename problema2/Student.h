#pragma once

class Student
{
    char name[100];
    float MGrade, EGrade, HGrade;
public:
    char* getName();
    void setName(), setMGrade(), setEGrade(), setHGrade();
    float avgGrade(), getMGrade(), getEGrade(), getHGrade();
};

