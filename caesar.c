#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// key is num of shifts
//  plaintext is thr Unencrypted message
// ciphertext is the encrypted message

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    }
    // atoi is a function that converts a string into an int
    int key = atoi(argv[1]);
    // get plaintext from the user
    string plainText = get_string("Your Plaintext: ");
    printf("ciphertext: ");
    // if you wrote the letter captial A and its ascii vaule is 65
    // 65 -65 =0
    // let's say the key is 1
    // 65 + 1 = 66
    // 65 % 26 = 13
    // then we added 65 so it prints out B
    for (int c = 0; c < strlen(plainText); c++)
    {
        if (isupper(plainText[c]))
        {
          printf("%c", (plainText[c] - 65 + key) % 26 + 65);
        }
        else if (islower(plainText[c]))
        {
          // 97 because it is a lowercase letter

          printf("%c", (plainText[c] - 97 + key) % 26 + 97);
        }
// if it is full stop. ! ? and all symbols and numbers should remain as it is
        else
        {
          printf("%c", plainText[c]);
        }
    }
    printf("\n");
}
