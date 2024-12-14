#include <stdio.h>

int main()
{
    // variable declarations
    char ch;
    int ptsMarj, ptsJohn;

    // for loop which iterates twice to get players' points
    for (int i = 0, points = 0; i < 2; i++, points = 0)
    {
        // conditional statement which prints message to user
        (i == 0) ? (printf("Enter the first sequence: ")) : (printf("Enter the second sequence: "));

        // do-while loop which iterates until the user enters a newline character
        do
        {
            ch = getchar();

            // conditional statement which when evaluated to true adds 1 point to user's score
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                points++;

            // conditional statement which when evaluated to true adds 2 points to user's score
            else if (ch == 't' || ch == 'n' || ch == 's' || ch == 'r' || ch == 'h')
                points += 2;

            // conditional statement which when evaluated to true adds 3 points to user's score
            else if (ch >= 'a' && ch <= 'z')
                points += 3;
        } while (ch != '\n');

        // conditional statement which assigns points to correct player
        (i == 0) ? (ptsMarj = points) : (ptsJohn = points);
    }

    // conditional statement which checks if Marjorie got more points than John
    if (ptsMarj > ptsJohn)
        printf("Marjorie wins!\n");

    // conditional statement which checks if John got more points than Marjorie
    else if (ptsJohn > ptsMarj)
        printf("John wins!");

    // conditional statement which evaluates to true if Marjorie and John got the same number of points
    else
        printf("Play again!");

    return 0;
}
