#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node * head = NULL;
struct Node * tail = NULL;
int len = 0;

//Methods
void append( int data );
void preAppend( int data );
void insert(int data, int index);
void delete( int index );
void show();

int main(){

    preAppend(1);
    preAppend(0);
    append(2);
    append(3);
    insert(4, 3);
    delete(1);
    show();


    return 0;
}

void delete( int index ){
    if( index == 0 ){
        struct Node* current = head;
        head = current->next;
        len--;
    } else if( index == len ){
        struct Node* current = tail->prev;
        current->next = NULL;
        len--;
    } else {
        int counter = 0;
        struct Node* current = head;
        while( counter < index ){
            current = current->next;
            counter++;
        }

        struct Node* prev = current->prev;
        struct Node*  next = current->next;
        prev->next = next;
        next->prev = prev;
        len--;
    }
}

void insert( int data, int index ){
    if( index == len ){
        append(data);
    } else if( index == 0 ){
        preAppend(data);
    } else {
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        new->data = data;
        struct Node* current = head;
        int counter = 0;
        while (counter < index) {
            current  = current->next;
            counter++;
        }
        struct Node* prev = current->prev;
        prev->next = new;
        new->prev = prev;
        new->next = current;
        current->prev = new;
        len++;
    }
}

void append( int data ){
    struct Node* new  = (struct Node*)malloc(sizeof(struct Node));
    new->data = data;
    if(!tail){
        tail = new;
        head = tail;
    } else {
        tail->next = new;
        new->prev = tail;
        tail = new;
    }
    len++;
}

void preAppend( int data ){
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    new->data = data;
    if(!head){
        head = new;
        tail = head;
    } else {
        new->next = head;
        head->prev = new;
        head = new;
    }
    len++;
}

void show(){
    struct Node* current = head;
    while(current){
        printf("%d<->", current->data);
        current = current->next;
    }
    printf("Len is :%d ", len);
}
