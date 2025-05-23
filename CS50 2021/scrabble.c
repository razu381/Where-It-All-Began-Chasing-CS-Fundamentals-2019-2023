#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 'u', 'v', 'w', 'x', 'y', 'z'};

int compute_score(string word);

int main(void)
{

    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    //Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins! \n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("Tie! \n");
    }
    

}//end fo int (main)void

int compute_score(string word)
{
    int score = 0;
    // Compute and return score for string
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        //to make every word lowercase
        word[i] = tolower(word[i]);
        //printf("%c",word[i]);
        //check the words position in alphabet array
        for (int j = 0, k = strlen(alphabets); j < k; j++)
        {
            if (word[i] == alphabets[j])
            {
                score += POINTS[j];
            }
        }
    }
        
    return score;


}
