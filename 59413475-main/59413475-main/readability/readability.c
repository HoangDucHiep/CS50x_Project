#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int compute_level(string text);//This function will calculate the level!


int main(void)
{
    string text = get_string("Text: ");
    int level = compute_level(text);
    if(level < 1){
        printf("Before Grade 1\n");
    }else if(level > 16){
        printf("Grade 16+\n");
    }else printf("Grade %d\n",level);
}

int compute_level(string text){
    float words = 0, letters = 0, sentences = 0;
    float L, S; //We use float here because we need to perform precise calculations after the decimal point.
    for(int i = 0; i < strlen(text); i++){
        if(isalpha(text[i])){ // if at index i is an alphabet, we will add 1 to letters
            letters ++;
        }
        else if((text[i] == '!' || text[i] == '.') || text[i] == '?'){
            sentences ++; // If there is a '.', or '!' or '?', it means that's the end of the sentences, so count sentences up by 1;
        }else if(text[i] == ' ') words ++; // :))
    }
    words ++; // cuz the last word just end with a dot or '!' ..., so i fix with this line to add one word at last.
    L = (letters / words) * 100;
    S = (sentences / words) * 100;
    return round(0.0588 * L - 0.296 * S - 15.8); //round function in math.h library.
}