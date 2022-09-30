#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *new_right;

	if (!parent)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	new_right = parent->right;
	parent->right = new_node;

	if (new_right)
	{
		new_right->parent = new_node;
		new_node->right = new_right;
	}
	return (new_node);
}
