#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        // take user's input
        height = get_int("height: ");
    }
    while (!(height >= 1 && height <= 8));
// n is the height which is an integer between 1 and 8



    for (int row = 1; row <= height; row++)
    {
        // i printed space because we want the #'s to be on the right
        for (int rightAlighned = 1; rightAlighned <= height - row; rightAlighned++)
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++) // here i will print # for every row

        {
            printf("#");
        }
        // new line
        printf("\n");
    }
}