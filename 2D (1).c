//A system to display room occupancy
/*
NAME: OTIENO JOSEPH ODURU
REGISTRATION NUMBER:BCS-05-0161/2026
DATE:25/10/2026
Version 1
*/
#include<stdio.h>
int main()
{
    int occupancy[5][10];
    int i,j;
    int occupied,vacant;
    
    //2. Input a random occupancy.
    for(i=0;i<5;i++)
    {
        printf("Enter the floor occupancy%d:\n",i+1);
        
        for(j=0;j<10;j++)
        {
            printf("Room%d(1=occupied,0=vacant)",j+1);
            scanf("%d",&occupancy[i][j]);
        }
    }
    //count room occupied and vaccant rooms per floor.
   for(i=0;i<5;i++)
   {
       occupied=0;
       vacant=0;
       for(j=0;j<10;j++)
       {
           if(occupancy[i] [j] ==1)
           { occupied ++;
           }
           else
           {
               vacant++;
           }
       }
       //Display the number of occupied and vaccant rooms per floor.
       
       printf("\n floor%d\n",i+1);
       printf("Occupied rooms=%d\n",occupied);
       printf("vacant rooms=%d\n",vacant);
   }
   return 0 ;
}