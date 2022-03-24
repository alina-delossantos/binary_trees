#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left, *tmp;

	if (!parent)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (!new_left)
		return (NULL);

	new_left->n = value;
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_left;
		new_left->left = tmp;
		new_left->right = NULL;
		new_left->parent = parent;
		tmp->parent = new_left;
	}
	else
	{
		parent->left = new_left;
		new_left->parent = parent;
		new_left->left = NULL;
		new_left->right = NULL;
	}
	return (new_left);
}
