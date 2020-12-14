#include<stdio.h>
//
//
////
////7
////1 3 5 2 4 6 7
//
//
////////////////////////////////////////////////////SELECTION SORT/////////////////////////////////////////////////////////////////
//
//// function to swap the the position of two elements
//void swap(int *a, int *b) {
//  int temp = *a;
//  *a = *b;
//  *b = temp;
//}
//
//
//int minSwaps(int n,int array[n])
//{
//    int swaps = 0;
//    int minIndex = 0;
//    for(int j=0; j<n; j++)
//    {
//
//        for(int k=j+1; k<n ; k++)
//        {
//            if(array[k] < array[minIndex])
//            {
//                minIndex = k;
//            }
//        }
//        if(j != minIndex)
//        {
//            swap(&array[j],&array[minIndex]);
//            swaps++;
//        }
//        while(array[j+1] == array[j]+1)
//        {
//            j++;
//        }
//    }
//    printf("%d",swaps);
//    return 0;
//}
//
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    
//    minSwaps(n,arr);
//}


///////////////////////////Above SELECTION SORT algo exceeds time limit///////////////////////////////


int minSwaps(int n,int array[n][3])
{
    int swaps = 0;
    for(int j=0 ;j<n ;j++)
    {
        int cycle_size = 0;
        if(array[j][2] != 1)
        {
            int x=array[j][1];
            array[j][2] = 1;
              int y=array[array[j][1]-1][1];
              array[array[j][1]-1][2] = 1;
            int m = j;
            while(x!=y)
            {
                int z = y;
                cycle_size++;
                y = array[z-1][1];
                array[z-1][2] = 1;
            }
            swaps = swaps + (cycle_size);
        }
    }
    printf("%d",swaps);
    return 0;
}

//7
//1 3 5 2 4 6 





int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][3];
    int swaps = 0; 
    
    for(int i=0; i<n; i++)
    {
        arr[i][0] = i;
        scanf("%d",&arr[i][1]);
        arr[i][2] = 0;    
        
    }
    
//    for(int i=0; i<n; i++)
//    {
//        printf("%d%d ",arr[i][0],arr[i][1],arr[i][2]);
//    }
    minSwaps(n,arr);
}
