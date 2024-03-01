# **binary_trees**

Binary tree - hierarchial data structure that has nodes, node has left child and right child.

- **root node** - the topmost node
- **leaf node** - node without a child
- **left child** - less than/ equal to the parent node value
- **right child** - greater than/ equal to the parent node value

```c
typedef struct treenode {
    int value;
    struct treenode *left;
    struct treenode *right;
} treenode;

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

```
