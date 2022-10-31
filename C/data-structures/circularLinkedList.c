#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

struct Node *head = NULL;
struct Node *tail = NULL;
int size = 0;

void addHead(int value);
void push(int data);
int isEmpty();
void printNodes();

int main(int argc, char const *argv[])
{
    push(2);
    return 0;
}

void addHead(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;
    if (isEmpty())
    {
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
    }

    size++;
}

void push(int data)
{
    if (size == 0)
    {
        addHead(data);
    }
    else
    {
        struct Node *new = (struct Node *)malloc(sizeof(struct Node));
        new->value = data;
        struct Node *current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = new;
        new->next = head;
    }
    size++;

}

void printNodes()
{
    printf("%d ", head->value);
    printf("%d ", tail->value);
}

int isEmpty()
{
    return size == 0 ? 1 : 0;
}
