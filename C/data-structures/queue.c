// FIFO
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};


struct Node *top = NULL;
struct Node *bottom = NULL;
int len = 0;

// Methods
void enqueue( int data );
void dequeue();
void show();

int main(){
    
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    show();

    return 0;
}


void show(){
    struct Node * current = bottom;
    printf("[<-");
    while( current ){
        printf(" %d ", current->data );
        current = current->next;
    }
    printf("]");
}

void dequeue(){
    bottom = bottom->next;
    len--;
}

void enqueue( int data ){
    
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = data;
    
    if( len == 0 ){
        top = new;
        bottom = new;
    } else {
        top->next = new;
        top = new;
    }
    
    len++;
}
