#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: parent pointer the right-child
 * @value: value of the new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent != NULL)
{
new = malloc(sizeof(binary_tree_t));
if (new != NULL)
{
new->left = NULL;
new->right = parent->right;
new->parent = parent;
new->n = value;
if (parent->right != NULL)
{
parent->right->parent = new;
}
parent->right = new;
}
}
return (new);

}
