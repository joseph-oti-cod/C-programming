//A system to monitor room and revenue occupancy

/* AUTHOR:Otieno joseph oduru
REGISTRATION NUMBER:BCS-05-0161/2024
Description:A system meant to monitor room and revenue collection.
DATE:26/10/2026
*/

#include<stdio.h>
int main()
{
    float revenue[7];
    float total=0,average;
    int i;
    
    for(i=0;i<=7;i++)
    {
       printf("Enter the revenue for the day:",i+1);
       scanf("%f",&revenue[i]);
       
       total=total+revenue[i];
    }
    average=total/7;
    
    printf("\n Total weekly revenue:ksh %.2f\n",total);
    printf("Average daily revenue:ksh%.2f\n",average);
    
    return 0;
}
