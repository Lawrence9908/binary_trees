#include "binary_trees.h"

/**
 * binary_tree_preorder - perform in-order traversal
 * @tree: a pointer to root node to start traversal at
 * @func: a pointer fucntion to call on tree node's data
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
    {
        return;
    }
    binary_tree_preorder(tree->left, func);
    func(tree->n);
    binary_tree_preorder(tree->right, func);
}