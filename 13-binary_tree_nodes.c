#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child in the tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left != NULL || tree->right != NULL)
{
nodes = 1;
}

nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
return (nodes);

}
