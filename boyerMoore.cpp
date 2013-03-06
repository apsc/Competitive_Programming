#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *BoyerMoore(  char *data,  int dataLength,  char *string,  int strLength )
{
     int skipTable[256], i;
     char *search;
    register  char lastChar;

    if (strLength == 0)
        return NULL;
    for (i = 0; i < 256; i++)
        skipTable[i] = strLength;
    search = string;
    i = --strLength;
    do
    {
        skipTable[*search++] = i;
     } while (i--);

    lastChar = *--search;
    search = data + strLength;
    dataLength -= strLength+(strLength-1);

    while ((int)dataLength > 0 )
    {
         int skip;
         if (*search != lastChar) 
        {
            skip = skipTable[*search];
            search += skip;
            dataLength -= skip;
            continue;
        }
        i = strLength;

        do
        {
             if (i-- == 0){
                printf("%d\n",i);
                return search;
            }
        } while (*--search == string[i]);
        search += (skipTable[*search] - i + 1);
        dataLength--;
    }
    return NULL;
}

int main()
{
    static char data[] = "banananobano";
    static char search[] = "na";


    char *str = BoyerMoore( data, strlen(data), search, strlen(search) );

    if (str == NULL)
        puts( "String not found" );
    else
        puts( str );
    system("pause");
    return 0;
}

