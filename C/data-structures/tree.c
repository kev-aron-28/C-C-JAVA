#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node *root = NULL;

struct node* createLevelOrderBinary(int arr[], int len, int start);

void insert(int data);
void print2DUtil(struct node *root, int space);
void preorder(struct node *root);
void inorder(struct node *root);
void postorder(struct node *root);
struct node* minNode(struct node* n);

struct node* delete(struct node * n,int value);


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    root = createLevelOrderBinary(arr, 10, 0);
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

void preorder(struct node *n) {
    if(n != NULL) {
        printf(" %d ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

void inorder(struct node *n) {
    if(n != NULL) {
        preorder(n->left);
        printf(" %d ", n->data);
        preorder(n->right);
    }
}

void postorder(struct node *n) {
    if(n != NULL) {
        preorder(n->left);
        preorder(n->right);
        printf(" %d ", n->data);
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

struct node* minNode(struct node* n) {
    struct node* current = n;
    if(current == NULL) return NULL;
    while(current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct node* delete( struct node * n, int value) {
    struct node * temp = NULL;
    if(n != NULL) {
        if(n->data == value) {
            if(n->left == NULL && n->right == NULL){
                return temp;
            } else {
                if(n->left == NULL) {
                    temp = n->right;
                    return temp;
                }
                if(n->left == NULL) {
                    temp = n->right;
                    return temp;
                }

                struct node * min = minNode(n->right);
                n->data = min->data;
                n->right = delete(n->right, min->data);
            }
        } else {
            if(n -> data > value) {
                n->left = delete(n->left, value);
            } else {
                n->right = delete(n->right, value);
            }
        }
    }

    return n;
}

struct node* createLevelOrderBinary(int arr[], int len, int start) {
    struct node* curr = (struct node*)malloc(sizeof(struct node));
    curr->data = arr[start];
    int left = 2 * start + 1;
    int right = 2 * start + 2;

    if(left < len) {
        curr->left = createLevelOrderBinary(arr, len, left);
    }

    if(right < len) {
        curr->right = createLevelOrderBinary(arr, len, right);
    }
    
    return curr;
}