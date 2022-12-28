#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    
    int i=0;
    char word[10];
    scanf("%19s",word);
    printf("\n %s", word);
    while (word[i]!='\0') 
       { word[i]=toupper(word[i]);
            i++;
    }
    printf("\n %s", word);
    return 0;
}
