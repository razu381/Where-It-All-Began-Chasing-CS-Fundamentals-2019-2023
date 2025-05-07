#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
float average(int letter, int word);

int main(void)
{
    string s = get_string("Text:");
    int letters = 0;
    int words = 1;
    int sentence = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i])) //checks for alphabets
        {
            letters++;
        }
        else if (isblank(s[i])) //checks for space and tabs
        {
            words++;
        }
        else if (s[i] == '.') //checks for pucntuation marks
        {
            sentence++;
        }
        else if (s[i] == '?') //checks for pucntuation marks
        {
            sentence++;
        }
        else if (s[i] == '!') //checks for pucntuation marks
        {
            sentence++;
        }
    } //end of for loop

    float L = (float)letters / (float)words * 100;//average letters per 100 word
    float S = (float)sentence / (float)words * 100;// average sentences per 100 word
    int index = round(0.0588 * L - 0.296 * S - 15.8);//index according to coa man formua
    //printing the actual grade
    if (index >= 16)
    {
        printf("Grade 16+\n");
    } 
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index); 
    }
    


}//end of  int main(void)
