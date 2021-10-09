#include<stdio.h>
#include<stdlib.h>
typedef struct link{
    int n;
    struct link *next;
}link;
typedef struct tree{
    int n;
    struct tree* right;
    struct tree* left;
}tree;
void printTree(tree * tr){
    if(tr==NULL){
        return;
    }
    printTree(tr->left);
    printf("%d\n",tr->n);
    printTree(tr->right);
}

void right(tree *root){
    if(root = NULL){
        return;
    }
    right(root->right);
    printf("%d\n",root->n);
    right(root->left);
}
int main(int argc, char**argv){
    //Linked list
    // link li = {6,7};
    // link * ki = &li;
    // printf("%d\n",ki->n);
    // printf("%d\n",ki->next);
    //linked list
    // link *node = malloc(sizeof(link));
    // node->n = 90;
    // node->next = NULL;
    // link *list = node;
    // printf("%d\n",list->n);
    // printf("%d\n",list->next);
    // link *li = NULL;
    // int num = 98;
    // int num2 = 19;
    // int num3 = 21;
    // link *node = malloc(sizeof(link));
    // node->n = num;
    // node->next=NULL;
    // li = node;
    // node = malloc(sizeof(link));
    // node->n = num2;
    // node->next = NULL;
    // li->next = node;
    // // node = malloc(sizeof(link));
    // // node->n = num3;
    // // node->next = NULL;
    // // li->next->next = node;
    // // for(link *tmp = li;tmp !=NULL;tmp = tmp->next){
    // //     printf("%d\n",tmp->n);
    // // }
    // // link * list = NULL;
    // // link * node;
    // // node->n = 0;
    // // node->next =NULL;
    // // list = node;
    // // node = malloc(sizeof(link));
    // // node->n = 2;
    // // node->next = NULL;
    // // list->next = node;
    // // node = malloc(sizeof(link));
    // // node->n = 1;
    // // node->next = list->next;
    // // list->next = node;
    // // for(link *n = list;n !=NULL;n = n->next){
    // //     printf("%d\n",n->n);
    // // }
    // //Binary search tree
    // tree *tr = NULL;
    // tree *node = malloc(sizeof(tree));
    // node->n = 4;
    // node->left = NULL;
    // node->right =NULL;
    // tr = node;
    // // printTree(tr);
    // node = malloc(sizeof(tree));
    // node->n = 2;
    // node->left = NULL;
    // node->right = NULL;
    // tr->left = node;
    // // printTree(tr);
    // node = malloc(sizeof(tree));
    // node->n = 6;
    // node->left = NULL;
    // node->right = NULL;
    // tr->right = node;
    // node = malloc(sizeof(tree));
    // node->n = 1;
    // node->right = NULL;
    // node->left = NULL;
    // tr->left->left = node;
    //  node = malloc(sizeof(node));
    // node->n = 5;
    // node->left = NULL;
    // node->right = NULL;
    // tr->right->left = node;
    // // printTree(tr);
    // node = malloc(sizeof(tree));
    // node->n = 3;
    // node->left = NULL;
    // node->right = NULL;
    // tr->left->right = node;
    // // printTree(tr);
    // // printTree(tr);
    // node = malloc(sizeof(tree));
    // node->n = 7;
    // node->left = NULL;
    // node->right = NULL;
    // tr->right->right = node;
    // // printTree(tr);
    // // right(tr);
    return 0;
}