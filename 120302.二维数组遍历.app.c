#include<stdio.h>
void main()
{
	int row,column;
	int array2d[3][4]={
		{1,2,3,4},
		{7,6,8,5},
		{9,14,11,25}
	};
	for(row=0;row<3;row++){
		for(column=0;column<4;column++){
			printf("%d ",array2d[row][column]);
		}
		printf("\n");
	}
}
