#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
int n;
cin >> n;
int row;
int array [102] [102];
while (n--)
{
 cin >> row;
        for ( int i = 0; i < row; i++ ) {
            for ( int j = 0; j <= i; j++ )
                cin >> array [i] [j];
        }
        for ( int i = row - 2; i >= 0; i-- ) {
            for ( int j = 0; j <= i; j++ ) {
                if ( array [i + 1] [j] > array [i + 1] [j + 1] )
                    array [i] [j] += array [i + 1] [j];
                else
                    array [i] [j] += array [i + 1] [j + 1];
            }
        }
        printf ("%d\n", array [0] [0]);
    }
    return 0;
 
}



