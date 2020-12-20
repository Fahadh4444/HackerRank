#include<stdio.h>
#include<string.h>

typedef struct players
{
	char name[100];
	int score;
}player;


void swap(player *a, player *b)
{
  player temp = *a;
  *a = *b;
  *b = temp;
}



//Sort w.r.t Alphabetical order
int AlphabeticOrder(char a[100], char b[100])
{
	if(strcmp(a,b)>0)
	{
		char temp[100];
	    strcpy(temp,b);
	    strcpy(b,a);
	    strcpy(a,temp);
	}
	return 0;
}


//Sort the list w.r.t Score using Selection Sort 
void selectionSort(int size, player list[1000]) 
{
  for (int step = 0; step < size - 1; step++)
	{
	    int min_idx = step;
	    for (int i = step + 1; i < size; i++)
		{
	      if (list[i].score < list[min_idx].score)
		  {
	        min_idx = i;
	      }
	    }
	    swap(&list[min_idx], &list[step]);
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	player list[1000];
	for(int i=0; i<n; i++)
	{
		scanf("%s",list[i].name);
		scanf("%d",&list[i].score);
	}
    //Calling selectionSort(Sort w.r.t score)
	selectionSort(n,list);
	
	//Check whether two players have same scor eor not
	for(int j=0; j<n-1; j++)
	{
		int temp=j+1;
		if(list[j].score == list[temp].score)
		{
			//Sorts in Alphabetical order if two scores are equal
			AlphabeticOrder(list[temp].name,list[j].name);
		}
	}
	//Prints the list
	for(int i=n-1; i>=0; i--)
	{
		printf("%s",list[i].name);
		printf(" %d\n",list[i].score);
	}
	
	return 0;
}
