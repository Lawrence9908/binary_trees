#include "binary_trees.h"

/**
 * binary_tree_nodes - counts of nodes in a binary tree
 * @tree: a pointer node binary tree
 * Return: returns the number of nodes in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_number = 0;

	if (!tree)
    {
		return (0);
    }
	if (tree->left || tree->right)
    {
		nodes_number += 1;
    }
	nodes_number += binary_tree_nodes(tree->left);
	nodes_number += binary_tree_nodes(tree->right);
	return (nodes_number);
}