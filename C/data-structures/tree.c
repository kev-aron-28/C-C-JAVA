#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node *root = NULL;

void insert(int data);
void print2DUtil(struct node *root, int space);
int main() {
    insert(6);
    insert(8);
    insert(4);
    insert(3);
    insert(5);
    insert(6);
    insert(7);
    insert(9);
    print2DUtil(root, 10);
}


void insert(int data){
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;

    if(root == NULL) {
        root = new;
    } else {
        Node *current = root;
        while(1) {
            if(current->data > data) {
                if(current->left != NULL) {
                    current = current->left;
                } else {
                    current -> left = new;
                    break;
                }
            } else if (current->data < data) {
                if(current->right != NULL) {
                    current = current->right;
                } else {
                    current->right = new;
                    break;
                }
            } else {
                break;
            }
        }
    }
}

void print2DUtil(struct node *root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += 10;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    printf("\n");
    for (int i = 10; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
 
    // Process left child
    print2DUtil(root->left, space);
}