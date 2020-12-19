/////////////////////////////////////////////////////HEAP SORT/////////////////////////////////////////////

#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void heapify(int sizeofarr, int index, int array[1000000000])
{
    
    int largest_index = index;
    int left = 2*index +1;
    int right = 2*index +2;
    
    if(left < sizeofarr && array[left] > array[largest_index])
    {
        largest_index = left;
    }
    
        if(right < sizeofarr && array[right] > array[largest_index])
    {
        largest_index = right;
    }
    
    if(largest_index != index)
    {
        swap(&array[index],&array[largest_index]);
        heapify(sizeofarr, largest_index, array);
    }
}


void heapsort(int size, int array[100000000])
{
    for(int i = size-1; i>=0; i--)
    {
        heapify(size,i,array);
    }
    
    for(int j = size-1; j>=0; j--)
    {
        swap(&array[j],&array[0]);
        
        heapify(j,0,array);
    }
}



int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n];
    
    for(int x=0; x<n; x++)
    {
        scanf("%d",&arr[x]);
    }
    
    heapsort(n,arr);
//    for(int x=0; x<n; x++)
//    {
//        printf("%d",arr[x]);
//    }
     int toys =0; 
     int y = 0;
    while(m >= arr[y])
    {
        m = m - arr[y];
        y++;
        toys++;
    }
    printf("%d",toys);        
}
