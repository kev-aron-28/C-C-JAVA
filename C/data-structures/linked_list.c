#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
int size = 0;

void preAppend(int data);
void push(int data);
void insertAt(int data, int index);
void deleteAt(int index);
void sortedInsert(int data);
void deleteAllOcurrencies(int value);
void reverse();
void deleteFirst();
void printNodes();

// El

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    reverse();
    printNodes();
    printf("\n");
    return 0;
}

void printNodes()
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d | ", current->data);
        current = current->next;
    }
}

void push(int data)
{
    if (size == 0)
    {
        preAppend(data);
    }
    else
    {
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        new->data = data;
        new->next = NULL;
        struct Node *current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = new;
    }
    size++;
}

void preAppend(int data)
{
    struct Node *current = head;
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = data;
    new->next = current;
    head = new;
    size++;
}

void insertAt(int data, int index)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = data;
    int counter = 0;
    struct Node *prev = NULL;
    struct Node *current = head;
    while (counter < index)
    {
        prev = current;
        current = current->next;
        counter++;
    }
    new->next = current;
    prev->next = new;
    size++;
}

void deleteAt(int index)
{
    int counter = 0;
    struct Node *prev = NULL;
    struct Node *current = head;
    while (counter < index)
    {
        prev = current;
        current = current->next;
        counter++;
    }
    prev->next = current->next;
}

void deleteFirst()
{
    head = head->next;
    size--;
}

void sortedInsert(int data) {
    struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node * current = head;
    while(current->next != NULL && current->next->data < data) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    size++;
}

void reverse() {
    struct Node* current = head;
    struct Node* prev = NULL;
    struct Node* next = NULL;

    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

void deleteAllOcurrencies(int value){
    struct Node *current = head;
    struct Node * nextNode = NULL;

    while(current != NULL && current->data == value){
        head = current->next;
        current = head;
    }

    while(current != NULL) {
        nextNode = current->next;
        if(nextNode != NULL && nextNode->data == value){
            current->next = nextNode->next;
        } else {
            current = nextNode;
        }
    }
}