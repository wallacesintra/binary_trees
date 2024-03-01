#include "binary_trees.h"
/**
 * binary_tree_node - create a binary node
 * @parent: parent pointer of the node created
 * @value: value of the node
 * Return: pointer the node created
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

if (new == NULL)
return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;

return (new);

}
