#include<stdio.h>

#include<conio.h>

#define max 25

int main()

{

    int spiral[max][max]={{0}}; // initializing array with 0

    int r,c,i=0,j=-1,count=1;

    printf("\nEnter the row and column for spiral matrix:\n");

    scanf("%d%d",&r,&c);

    while(count<=r*c)  //this loop executes till all the blocks of

     {                 //array r*c are filled with 0

          while(j<c-1) //Filling the location from left to right 

        {                 //with value of variable count

          if(spiral[i][j+1]!=0)  //Here we are checking if that location

             break;                 //is already occupied

          spiral[i][++j]=count++; 

        }

        while(i<r-1)    //Filling the location from top to bottom       

        {

          if(spiral[i+1][j]!=0) 

            break;

          spiral[++i][j]=count++;     

        }

        while(j>0)     //Filling the location from right to left

       {    

         if(spiral[i][j-1]!=0)        

           break;

         spiral[i][--j]=count++;

       }     

       while(i>0)       //Filling the column from bottom to top     

       {

          if(spiral[i-1][j]!=0)      

              break;     

          spiral[--i][j]=count++;

       }

    }

     for(i=0;i<r;i++)

    {     

       for(j=0;j<c;j++)     

       {

          printf("%3d",spiral[i][j]); //print the matrix

       }

        printf("\n");

   }
   scanf("%d");
   return 0;
}
