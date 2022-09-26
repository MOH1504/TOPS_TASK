#include<stdio.h>
void main()
{
	int i;
	int arr1[5],arr2[5];
	printf  ("\n accepting array1 element \n\n\n");
	for (i=0; i<5; i++)
	{
	printf ("enter element %d ; ", i+1);
	
	scanf ("%d ", &arr1 [i]);
}

printf  ("\n accepting array2 element \n\n\n");
	for (i=0; i<5; i++)
	{
	printf ("enter element %d ; ", i+1);
	
	scanf ("%d ", &arr2 [i]);
}

	printf ("\n display array1 element \n\n\n");
	for (i= 0; i<5; i++  )
	{
		printf ("element %d %d\n ", i+1, arr2[i]);
		
	 }
	 
	 	printf ("\n display array2 element \n\n\n");
	for (i= 0; i<5; i++  )
	{
		printf ("element %d %d\n ", i+1, arr2[i]);
		
	 }  
	
	printf ("\n display array2 element \n\n\n");
	for (i= 0; i<5; i++  )
	{
	printf ("element %d = %d\n ",i+1, arr1[i]+arr2[i]);
		
	 }
	   
	
}
