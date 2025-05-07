//caesar cipher
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    //checking whether the key is valid
    if (argc != 2)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar key digit \n");
            return 1;
        }
    }
    //get the  string to enciphered
    string s = get_string(" Plain text: ");
    int key = atoi(argv[1]);
    printf("ciphertext: ");
    //ciphering the texts
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //cipher if the text is uppercase
        if (isupper(s[i]))
        {
            int alpha_index = (s[i] - 65);
            int cipher = (alpha_index + key) % 26;
            printf("%c", (char)cipher + 65);
        }
        //encipher if the text is lowercase
        else if (islower(s[i]))
        {
            int alpha_index = (s[i] - 97);
            int cipher = (alpha_index + key) % 26;
            printf("%c", (char)cipher + 97);
        }
        //if not uppercase or lowercase which mean it's not alphabet
        else
        {
            printf("%c", s[i]);
        }
    }//end of foor loop
    printf("\n");


}//end of int main void




