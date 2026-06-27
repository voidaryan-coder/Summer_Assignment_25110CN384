#include <stdio.h>

int main()
{
    int score = 0, ans;

    printf("=== PROGRAMMING QUIZ ===\n\n");

    // Q1
    printf("1. C language is used for?\n1) Web  2) System  3) Game  4) Design\n");
    scanf("%d", &ans);

    if (ans == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Q2
    printf("\n2. Which header file is used for printf?\n1) stdio.h  2) math.h  3) string.h  4) conio.h\n");
    scanf("%d", &ans);

    if (ans == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Q3
    printf("\n3. Which symbol ends a statement in C?\n1) :  2) .  3) ;  4) ,\n");
    scanf("%d", &ans);

    if (ans == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Q4
    printf("\n4. Which loop executes at least once?\n1) for  2) while  3) do-while  4) if\n");
    scanf("%d", &ans);

    if (ans == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Q5
    printf("\n5. Size of int is usually?\n1) 1 byte  2) 2 bytes  3) 4 bytes  4) 8 bytes\n");
    scanf("%d", &ans);

    if (ans == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Result
    printf("\n=== RESULT ===\n");
    printf("Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good!\n");
    else if (score >= 1)
        printf("Needs Improvement!\n");
    else
        printf("Try Again!\n");

    return 0;
}