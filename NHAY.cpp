#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char pattern[10000010],text[10000010];
int len,skipTable[256],dataLength;
int BoyerMoore()
{
    int i,skip,flag=0;
    char *search,lastChar;
    for (i = 0; i < 256; i++)
        skipTable[i] = len;
        
    search = pattern;
    i = --len;
    do
    {
        skipTable[*search++] = i;
     } while (i--);

    lastChar = *--search;
    search = text + len;
    dataLength -= (len-1);
    while (dataLength > 0 )
    {
         if (*search != lastChar) 
        {
            skip = skipTable[*search];
            search += skip;
            dataLength -= skip;
            continue;
        }
        i = len;
        do
        {
            if (i-- == 0){
                printf("%d\n",search-text);
                flag=1;
                search+=len;
                break;                
            }
        } while (i>=0&&*--search == pattern[i]);
        search += (skipTable[*search] - i + 1);
        dataLength--;
    }
    return flag;
}

int main()
{
    
    while(scanf("%d",&len)!=0||scanf("%d",&len)!=NULL){
        scanf("%s",&pattern);
        scanf("%s",&text);
        dataLength=strlen(text);
        int flag=BoyerMoore();
        if(!flag)printf("\n");
    }
    return 0;
}
