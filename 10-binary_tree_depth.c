#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to measure the depth.
 * Return: depth of a node or 0 if tree is NULL
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree != NULL)
	{
		if (tree->parent != NULL)
			depth = 1 + binary_tree_depth(tree->parent);
		return (depth);
	}

	return (0);
}
