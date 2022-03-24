#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves. If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total_leaves = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		total_leaves++;

	total_leaves += binary_tree_leaves(tree->left);
	total_leaves += binary_tree_leaves(tree->right);

	return (total_leaves);
}
