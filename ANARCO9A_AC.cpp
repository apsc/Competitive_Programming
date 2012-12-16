#include<stdio.h>
#include<cstring>
int main()
{
    char s[2010],st[2010];
    int top=0,count,i,count1=0;
    count=0;
while(1)
{
        scanf("%s",&s);
        if(s[0]=='-')
        break;
        count1++;
        count=0;
        top=0;
    st[top]=1;
    for(i=0;i<strlen(s);i++)
    {
                             if(s[i]=='}')
                             {
                                          if(st[top]!='{')
                                          {
                                                          count++;
                                                          top++;
                                                          st[top]='{';
                                          }
                                          else if(st[top]=='{')
                                          top--;
                                          }
                                          else if(s[i]=='{')
                                          {
                                                            if(top+1==strlen(s))
                                                            {
                                                                              if(st[top]=='{')
                                                                              {
                                                                                                count++;
                                                                                                top--;
                                                                                                continue;
                                                                                                }
                                                                                                }
                                                            top++;
                                                            st[top]=s[i];
                                                            }
                                                            }                             
                             if(st[top]!=1)
                             {
                                           count+=top/2;
                                           }
                                           printf("%d. %d\n",count1,count);
                                           }                                           
return 0;
}
