#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node is root node or not.
 * @node: a node of the binary tree
 * Return: returns 1 if a node is root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL || !node->parent)
    {
        return (1);
    }
    return (0);
}