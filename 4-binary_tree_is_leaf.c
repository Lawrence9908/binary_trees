#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check the leaf node of the binary tree
 * @node: node of the binary tree
 * Return: returns 1 i the node is leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node != NULL || node->left != NULL || node->right != NULL)
    {
        return (1);
    }
    return (0);
}