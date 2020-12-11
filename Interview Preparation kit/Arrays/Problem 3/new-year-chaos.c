#include<stdio.h>

//1
//8
//1 2 5 3 7 8 6 4

//int minBrides(int n,int arr[n])
//{
//    int brides=0;
//    
//    for(int k = 0; k<n ; k++)
//    {
//        if(arr[k] > k+2)
//        {
//            printf("Too chaotic");
//            return 0;
//        }
//    }
//    
//    
//    for(int m = n-1; m >= 0;m--)
//    {
//        if(arr[m] < arr[m-1])
//        {
//            brides++;
//            int temp = arr[m];
//            arr[m] = arr[m-1];
//            arr[m-1] = temp;
//            m = n;
//        }
//    }
//    printf("%d\n",brides);
//    return 0;
//}


//int minBrides(int n, int arr[n])
//{
//    for(int k = 0; k<n ; k++)
//    {
//        if(arr[k] > k+3)
//        {
//            printf("Too chaotic\n");
//            return 0;
//        }
//    }
//    
//    int brides = 0;
//    
//    for(int m=0; m < n ; m++)
//    {
//        
//    }
//}



int minBrides(int size, int array[size]) {
    int brides=0;

    for(int k = 0; k<size ; k++)
    {
        if(array[k] > k+3)
        {
            printf("Too chaotic\n");
            return 0;
        }
    }
    
    
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
      brides++;
    }
    array[j + 1] = key;
  }
  printf("%d\n",brides);
  return 0;
}




int main()
{
    int T,n;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        scanf("%d",&n);
        int array[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[j]);
        }
        minBrides(n,array);
    }
    return 0;
}
