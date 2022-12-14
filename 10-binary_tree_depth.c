#include "binary_trees.h"

/**
 * binaty_tree_depth - measures the depth of binary tree.
 * @tree: a pointer to root node to determine height
 * Return: return 0 if tree is NULL, otherwise depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth_size = 0;

    if(!tree)
    {
        return (0);
    }
    if (tree->parent)
    {
        depth_size += 1 + binary_tree_depth(tree->parent);
    }
    return (depth_size);
}