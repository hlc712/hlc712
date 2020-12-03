#include<stdio.h>
#include<windows.h>
void main()
{
	int row,column;
	
	int array2d[20][10]={
		{999,999,999,999,999,999,999,999,999,999},
		
	};
	for(row=0;row<20;row++){
		for(column=0;column<10;column++){
			array2d[row][column]=999;
			printf("%d ",array2d[row][column]);
		}
		
		printf("\n");
	}
	Sleep(5000);
		for(row=0;row<20;row++){
		for(column=0;column<10;column++){
				
			array2d[row][column]=0;
		
			printf("%d ",array2d[row][column]);
		}
		
		printf("\n");
		
	}
		for(row=0;row<20;row++){
		for(column=0;column<10;column++){
			array2d[row][column]=999;
			printf("%d ",array2d[row][column]);
		}
		
