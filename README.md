# Binary Trees Data Structure
---

## Learning Objective
* What is binary tree.
* What is the different between a binary tree and a Binary Search Tree.
* What is the possible gain in terms of the time complexity comapred to linked list.
* What is the depth, the heigh, and the size of a binary tree.
* What are the different traversal methods to go through a binary tree.
* What are the different traversal methods to go through a binary tree.
* What is a complete, a full, a perfect, a balanced binary tree.  

### Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
### AVL Tree
```
typedef struct binary_tree_s avl_t;
```
### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
### Binary Tree Operations Covered
* Creat a node of binary tree
* Insert left 
* Insert right