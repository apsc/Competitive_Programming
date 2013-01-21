
#include<iostream.h>
#include<conio.h>
int fib(int n)
{
     if (n<2)
     {
     
     return n;
     }
     else
     {
         int a;
         a=fib(n-1)+fib(n-2);
     
        return a;
     }
          
}
int main()
{
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     cout<<fib(i);
     getch();
     return 0;
}
