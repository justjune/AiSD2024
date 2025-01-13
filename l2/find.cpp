#include <cstring>


int findmatch(char *pattern, char *text) 
{
    int i, j; 
    int patternLen = strlen(pattern);
    int textLen = strlen(text);

   
    for (i = 0; i <= (textLen - patternLen); i++) 
    {
        j = 0;

        
        while ((j < patternLen) && (text[i + j] == pattern[j])) 
        {
            j++;
        }

        
        if (j == patternLen) 
        {
            return i;
        }
    }

   
    return -1;
}
