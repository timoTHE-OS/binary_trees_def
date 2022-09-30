#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *new_left;

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
	new_left = parent->left;
	parent->left = new_node;

	if (new_left)
	{
		new_left->parent = new_node;
		new_node->left = new_left;
	}
	return (new_node);
}
