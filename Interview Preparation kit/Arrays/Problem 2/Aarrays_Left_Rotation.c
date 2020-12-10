#include<stdio.h>


int main()
{
	int size,rotations;
	scanf("%d",&size);
	scanf("%d",&rotations);
	
	int array[size];
	 for(int i = 0; i<size; i++)
	 {
	 	scanf("%d",&array[i]);
	 }
	 
	 
	 for(int i= 0; i<rotations; i++)
	 {
	 	int temp = array[0];
	 	for(int j = 0; j<size; j++)
	 	{
		 	array[j] = array [j+1];
		}
		array[size-1] = temp;
	 }
	 
	 for(int i = 0; i<size; i++)
	 {
	 	printf("%d ",array[i]);
	 }
	 
	 return 0;
	 
}
