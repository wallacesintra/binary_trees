#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (tree == NULL)
return (0);

size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
return (size);

}
