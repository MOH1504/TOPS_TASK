#include<stdio.h>
void show(int *p)
{
	int i;
	printf("\npassing entire array in function using pointer : \n\n");
	for (i=0; i<5; i++)
	{
		printf ("%d\t",*(p+i));
		
	}
}
void main()
{
	int marks[5]= {10,30,50,37,23};
	show(marks); 
}

