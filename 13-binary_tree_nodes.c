#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: nodes with at least 1 child. 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parents = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		parents++;

	parents += binary_tree_nodes(tree->left);
	parents += binary_tree_nodes(tree->right);

	return (parents);
}
