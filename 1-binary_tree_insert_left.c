#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: parent pointer the left-child in
 * @value: value of the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent != NULL)
{
new = malloc(sizeof(binary_tree_t));
if (new != NULL)
{
new->n = value;
new->parent = parent;
new->left = parent->left;
new->right = NULL;
if (parent->left != NULL)
{
parent->left->parent = new;
}
parent->left = new;
}
}
return (new);

}
