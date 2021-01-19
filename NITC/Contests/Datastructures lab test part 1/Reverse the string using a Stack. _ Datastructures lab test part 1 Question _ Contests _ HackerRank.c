#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct stack{
    char items[100000];
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

int deleting(list *A){
    if(isEmpty(A)){
        return 0;
    }
    else{
        printf("%c",A->items[A->top]);
        A->top--;
        return 1;
    }
}



int main() {
    char string[10000];
    int size = 0;
    scanf("%s",string);
    list *S = (list *)malloc(sizeof(list));
    createStack(S);
    
    int i= 0;
    while(string[i] != '\0'){
        insert(S,string[i]);
        i++;
        size++;
    }
    
    for(int j=0; j<size; j++){
        deleting(S);
    }
    return 0;
}
