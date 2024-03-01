
#include "binary_trees.h"

typedef struct treenode {
    int value;
    struct treenode *left;
    struct treenode *right;
} treenode;

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

treenode *createnode(int value){
    treenode* result = malloc(sizeof(treenode));

    if (result != NULL){
        result -> left = NULL;
        result -> right = NULL;
        result -> value = value;
    }
    return result;
}


int main()
{
    treenode *n1 = createnode(10);
    treenode *n2 = createnode(11);
    treenode *n3 = createnode(12);
    treenode *n4 = createnode(13);
    treenode *n5 = createnode(14);

    n1 -> left = n2;
    n1 -> right = n3;
    n3 -> right = n4;
    n4 -> right = n5;



    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
}