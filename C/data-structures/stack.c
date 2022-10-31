#include <stdio.h>
#include <stdlib.h>

// LIFO

typedef struct Node {
    int data;
    struct Node * next;
} Node;

struct Node * top = NULL;
struct Node * bottom = NULL; 
int len = 0;
//Methods
void push( int data );
void pop();
int top_element();
void show();

int main(){
   
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    pop();
    show();
    return 0;
}

void push( int data ){
    struct Node * new = (struct Node*)malloc(sizeof(struct Node));
    new->data = data;
    if(!top){
        top = new;
        bottom = new;
    } else {
        struct Node * current = top;
        top = new;
        top->next = current;
    }
    len++;
}

void pop() {
    if(len == 1) {
        top = NULL;
        bottom = NULL;
    } else {
        Node *currentTop = top;
        top = currentTop->next;
    }
    len--;
}


int top_element() {
    return top->data;
}

void show(){
    struct Node * current = top;
    while(current){
        printf("\n|%d|", current->data);
        current = current->next;
    }
}
