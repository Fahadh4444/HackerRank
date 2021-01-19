#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct stack{
    int items[100000];
    int top;
};

typedef struct stack list;

void createStack(list *A){
    A->top = -1;
}


int  isEmpty(list *A){
    if(A->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void insert(list *A, int newNumber){
    A->top++;
    A->items[A->top] = newNumber;
}

void deleting(list *A){
    if(isEmpty(A)){
        printf("-1\n");
    }
    else{
        printf("%d\n",A->items[A->top]);
        A->top--;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    char ch;
    int m;
    int count = 0;
    list *S = (list *)malloc(sizeof(list));
    createStack(S);
    

    while(1){
        scanf("%c",&ch);
        
        switch(ch){
            case 'i':{
                scanf("%d",&m);
                insert(S,m);
                count++;
                if(count == n){
                    printf("1\n");
                }
                break;
            }
            case 'd':{
                deleting(S);
                count--;
                break;
            }
            case 'e':{
                if(isEmpty(S)){
                    printf("-1\n");
                }else{
                    printf("1\n");
                }
                break;
            }
            case 't':{
                exit(0);
            }
        }
    }
       
    return 0;
}
