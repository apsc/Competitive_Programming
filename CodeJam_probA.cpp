#include<stdio.h>
#include<cstring>
#include<map>

using namespace std;
int main(){
    map<char,char> m;
    int t,p=1;
    m['a']='y';
    m['b']='h';
    m['c']='e';
    m['d']='s';
    m['e']='o';
    m['f']='c';
    m['g']='v';
    m['h']='x';
    m['i']='d';
    m['j']='u';
    m['k']='i';
    m['l']='g';
    m['m']='l';
    m['n']='b';
    m['o']='k';
    m['p']='r';
    m['q']='z';
    m['r']='t';
    m['s']='n';
    m['t']='w';
    m['u']='j';
    m['v']='p';
    m['w']='f';
    m['x']='m';
    m['y']='a';
    m['z']='q';
    m[' ']=' ';
    char temp[102];
    scanf("%d",&t);
    while(t--){
               getchar();
               gets(temp);
               int len=strlen(temp);
               printf("Case #%d: ",p);
               for(int i=0;i<len;i++){
                       printf("%c",m[temp[i]]);                       
               }
               printf("\n");
               p++;
    }
    return 0;
}
