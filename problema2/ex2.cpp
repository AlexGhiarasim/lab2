#include "Student.h"
#include "Comparisons.h"
#include <stdio.h>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;

int main()
{
    Student s[100];
    bool exitMenu = 1, found;
    int action, count, i, j, x, itemtoCmp;
    char name[255], name1[255], name2[255];

    printf("How many students do you want to add information for? ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        s[i].setName();
        s[i].setMGrade();
        s[i].setEGrade();
        s[i].setHGrade();
    }

    while (exitMenu != 0)
    {
        printf("\nWhat do you want to do? (type a number) \n1.See the grades of a student.\n2.See the average grade of a student. \n3.Compare two students. \n0.Exit.\n");
        scanf("%d", &action);

        switch (action)
        {
        case 1:
            found = false;
            printf("First name of the student you want to see the grades of: ");
            scanf("%s", name1);
            printf("Last name of the student you want to see the grades of: ");
            scanf("%s", name2);
            strcat(name1, " ");
            strcat(name1, name2);
            strcpy(name, name1);
            for (int i = 0; i < count; i++)
                if (strcmp(name, s[i].getName()) == 0)
                    printf("Math: %.2f, English: %.2f, History: %.2f\n", s[i].getMGrade(), s[i].getEGrade(), s[i].getHGrade()), printf("\n"), found = true;
            if (!found)
                printf("No matching name.\n");
            break;

        case 2:
            found = false;
            printf("First name of the student you want to see the average grade of: ");
            scanf("%s", name1);
            printf("Last name of the student you want to see the average grade of: ");
            scanf("%s", name2);
            strcat(name1, " ");
            strcat(name1, name2);
            strcpy(name, name1);
            for (int i = 0; i < count; i++)
                if (strcmp(name, s[i].getName()) == 0)
                    printf("The average grade is: %.2f", s[i].avgGrade()), printf("\n"), found = true;
            if (!found)
                printf("No matching name.\n");
            break;


        case 3:
            printf("First name of the first student you want to compare: ");
            scanf("%s", name1);
            printf("Last name of the first student you want to compare: ");
            scanf("%s", name2);
            strcat(name1, " ");
            strcat(name1, name2);
            strcpy(name, name1);
            for (i = 0; i < count; i++)
                if (strcmp(name, s[i].getName()) == 0)
                {
                    break;
                }

            printf("First name of the second student you want to compare: ");
            scanf("%s", name1);
            printf("Last name of the second student you want to compare: ");
            scanf("%s", name2);
            strcat(name1, " ");
            strcat(name1, name2);
            strcpy(name, name1);
            for (j = 0; j < count; j++)
                if (strcmp(name, s[j].getName()) == 0)
                {
                    break;
                }
            printf("What do you want to compare: \n1.Math grade.\n2.English grade. \n3.History grade. \n4.Average grade.\n");
            scanf("%d", &itemtoCmp);
            switch (itemtoCmp)
            {
            case 1:
                x = cmpMGrade(s[i].getMGrade(), s[j].getMGrade());
                if (x == 0)
                    printf("The students have the same grade.");
                else {
                    if (x == 1)
                        printf("First student has a higher grade.");
                    else
                        printf("Second student has a higher grade.");
                }
                break;
            case 2:
                x = cmpEGrade(s[i].getEGrade(), s[j].getEGrade());
                if (x == 0)
                    printf("The students have the same grade.");
                else {
                    if (x == 1)
                        printf("First student has a higher grade.");
                    else
                        printf("Second student has a higher grade.");
                }
                break;
            case 3:
                x = cmpHGrade(s[i].getHGrade(), s[j].getHGrade());
                if (x == 0)
                    printf("The students have the same grade.");
                else {
                    if (x == 1)
                        printf("First student has a higher grade.");
                    else
                        printf("Second student has a higher grade.");
                }
                break;
            case 4:
                x = cmpAvgGrade(s[i].avgGrade(), s[j].avgGrade());
                if (x == 0)
                    printf("The students have the same average grade.");
                else {
                    if (x == 1)
                        printf("First student has a higher average grade.");
                    else
                        printf("Second student has a higher average grade.");
                }
                break;

            default:
                break;
            }

        case 0:
            break;
        }

        exitMenu = action;
    }

    return 0;
}

