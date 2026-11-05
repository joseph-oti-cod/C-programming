
/*
NAME: OTIENO JOSEPH ODURU
REGISTRATION NUMBER:BCS-05-0161/2026
DATE:25/10/2026
Version 1
*/
//Program: Matrix 3D Arrays

#include <stdio.h>

int main(int argc, char** argv)
{
	int i,j;
	int marks[2][3]={
	{10,20,30},
	{40,50,60}
};
	
	//10,20,30,40,50,60,
	for(i=0;i<2;i++)
	{
		printf("\n");
	for(j=0;j<3;j++)
	{
		printf("%d  ", marks[i][j]);
		
	}
	
	}	
		printf("\n");	
	return 0;
}