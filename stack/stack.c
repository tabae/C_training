#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef struct stack_int{
    int array[STACK_SIZE];
    int top;
}stack;

void init(stack *st){
    st->top = 0;
}

void push(stack *st, int i){
    if(st->top < STACK_SIZE){
        st->array[st->top] = i;
        st->top++;
    }else{
        fprintf(stderr, "ERROR: Stack Overflow\n");
        exit(1);
    }
}

void pop(stack *st){
    if(st->top == 0){
        fprintf(stderr, "ERROR: Stack is empty\n");
        exit(1);
    }else{
        st->top--;
    }
}

int top(stack *st){
    if(st->top == 0){
        fprintf(stderr, "ERROR: Stack is empty\n");
        exit(1);
    }else{
        return st->array[st->top-1];
    }
}

int main(){
    stack st;
    init(&st);
    
    int i;
    for(i = 1; i < 30; i++){
        if(i % 3 == 0){
            printf("%d\n", top(&st));
            pop(&st);
        }else{
            push(&st, i);
        }
    }

    return 0;
}
