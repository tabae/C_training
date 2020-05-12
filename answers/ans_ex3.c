#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 1000

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

int main(int argc, char *argv[]){

    // read file name from command line arguments
    if(argc < 2){
        fprintf(stderr, "USAGE: ./a.out [file name]\n");
        exit(1);
    }

    int i, n;
    stack st;
    init(&st);
    
    // read query counts from file
    FILE *fp;
    fp = fopen(argv[1], "r");
    if(fp == NULL){
        fprintf(stderr, "ERROR: Failed to open file\n");
        exit(1);
    }
    fscanf(fp, "%d", &n);

    // read queries from file
    for(i = 0; i < n; i++){    
        char q[10];
        fscanf(fp, "%s", q);

        // top
        if(q[0] == 't'){
            printf("%d\n", top(&st));
        
        // pop
        }else if(q[1] == 'o'){
            pop(&st);
        
        // push N
        }else if(q[1] == 'u'){
            int j;
            fscanf(fp, "%d", &j);
            push(&st, j);
        }
    
    }
    fclose(fp);
    return 0;
}
