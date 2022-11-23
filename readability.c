#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
        string text = get_string("Text: ");

        int letters = 0;
        // since words are seperated by spaces we can count the number of spaces to know the number of words
        //  like if spaces =2 words will = 3 and that is why we will insialize word with 1
        int words = 1;
        int sentences = 0;

        for (int i = 0; i < strlen(text); i++)
        {
                // if(text[i]>65 && text[i]<90) || ( text[i]> 97 && text[i]< 122)
                if (isalpha(text[i]))
                {
                        letters++;
                }
                else if (text[i] == ' ')
                {
                        words++;
                }
                // since sentences ends with a full stop . we will count the number of full stops .
                //  also question marks and excalamtiob marks
                else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
                {
                        sentences++;
                }
        }
        float L = (float)letters / (float)words * 100;
        float S = (float)sentences / (float)words * 100;
        int index = round(0.0588 * L - 0.296 * S - 15.8);

        if (index < 1)
        {
                printf("Before Grade 1\n");
        }
        else if (index > 16)
        {
                printf("Grade 16+\n");
        }
        else
        {
                printf("Grade %i\n", index);
        }
}