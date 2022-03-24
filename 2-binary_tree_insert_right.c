#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right, *tmp;

	if (!parent)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));

	if (!new_right)
		return (NULL);

	new_right->n = value;
	if (parent->right)
	{
		tmp = parent->right;
		parent->right = new_right;
		new_right->right = tmp;
		new_right->left = NULL;
		new_right->parent = parent;
		tmp->parent = new_right;
	}
	else
	{
		parent->right = new_right;
		new_right->parent = parent;
		new_right->right = NULL;
		new_right->left = NULL;
	}
	return (new_right);
}
