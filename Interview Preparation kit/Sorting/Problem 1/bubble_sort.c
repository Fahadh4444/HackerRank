#include<stdio.h>

int main()
{
    int  n;
    scanf("%d",&n);
    int array[n];
    for(int k=0; k< n; k++)
    {
        scanf("%d",&array[k]);
    }

    int swaps = 0;
    for (int i = 0; i < n; i++) 
    {
        
        for (int j = 0; j < n - 1; j++) 
        {
            // Swap adjacent elements if they are in decreasing order
            if (array[j] > array[j + 1]) 
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swaps++;
            }
        }
        
    }
    printf("Array is sorted in %d swaps.",swaps);
    printf("\nFirst Element: %d",array[0]);
    printf("\nLast Element: %d",array[n-1]);
}

