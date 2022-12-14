#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer node binary tree
 * Return: returns the number of leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_number = 0;

	if (!tree)
    {
		return (0);
    }
	if (!tree->left && !tree->right)
    {
		leaves_number += 1;
    }
	leaves_number += binary_tree_leaves(tree->left);
	leaves_number += binary_tree_leaves(tree->right);
	return (leaves_number);
}