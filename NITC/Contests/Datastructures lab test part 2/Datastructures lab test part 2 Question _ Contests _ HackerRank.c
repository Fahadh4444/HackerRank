#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Creating a node
struct node {
  int value;
  struct node *next;
};



struct node* createNode(int key)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->value = key;
    newNode->next = NULL;
    return newNode;
}



int main() {
	int arr[100000];
	int count = 0;
	int i=0;
	while(1==1){
		char c;
		scanf("%d%c",&arr[i],&c);
		count++;
		i++;
		if(c=='\n'){
			break;
		}
	}
	int num;
	scanf("%d",&num);
	
	struct node* head;
	struct node* x;
	head = createNode(0);	
	for(i=0;i<count;i++){
		if(head->next == NULL){
			x = createNode(arr[i]);
			i++;
			head->next = x;
		}
		x->next = createNode(arr[i]);
		x = x->next;
	}
	
	x = head->next;
	int index = 0;
	int final=0;
	for(int j =0 ; j<count;j++){
		index++;
		if(x->value == num){
			final = 1;
			printf("%d",index);
			break;
		}
		x = x->next;
	}
	if(index == count){
		if(final == 0){
			printf("-1");
		}
	}
	
	return 0;
}
