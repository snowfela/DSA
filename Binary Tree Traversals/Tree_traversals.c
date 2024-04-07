//binary tree traversals 

#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;
Node* createNode(char data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
void inorder(Node* root) { //inorder traversal
    if (root) {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}
void preorder(Node* root) { //preorder traversal
    if (root) {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node* root) { //postorder traversal
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%c ", root->data);
    }
}
void main() {
    Node* root = createNode('A');
    root->left = createNode('B');
    root->right = createNode('C');
    root->left->left = createNode('D');
    root->left->right = createNode('E');
    root->right->left = createNode('F');
    root->right->right = createNode('G');
    printf("Inorder, Preorder, Postorder:\n");
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
}
