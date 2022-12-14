#include "binary_trees.h"

/**
 * binaty_tree_height - measures the height of bunary tree.
 * @tree: a pointer to root node to determine height
 * Return: return 0 if tree is NULL, otherwise height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_s = 0, right_s = 0;

    if (tree)
    {
        if (tree->left)
        {
            left_s += 1 + binary_tree_height(tree->left);
        }
        if (tree->right)
        {
            right_s += 1 + binary_tree_height(tree->right);
        }
        if (left_s > right_s)
        {
            return (left_s);
        }
        else
        {
            return (right_s);
        }
    }
    return (0);
}