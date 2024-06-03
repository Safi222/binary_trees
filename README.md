# Binary Trees

## Description

Welcome to the Binary Trees project repository! This project focuses on understanding and implementing binary trees, a fundamental data structure in computer science. Binary trees are used in various applications such as searching, sorting, and representing hierarchical data. By the end of this project, you should be able to implement different types of binary trees and perform various operations on them.

## Learning Objectives

By the end of this project, you should be able to:

- Understand the basic concepts of binary trees.
- Implement binary tree data structures in C.
- Perform tree traversals (in-order, pre-order, post-order).
- Understand and implement binary search trees (BST).
- Implement insertion, deletion, and search operations in BST.
- Understand tree balancing concepts and AVL trees.
- Implement AVL tree rotations and balancing operations.

## Project Files

- **binary_trees.h**: Header file containing all the function prototypes and definitions for the project.
- **0-binary_tree_node.c**: Function that creates a binary tree node.
- **1-binary_tree_insert_left.c**: Function that inserts a node as the left child of another node.
- **2-binary_tree_insert_right.c**: Function that inserts a node as the right child of another node.
- **3-binary_tree_delete.c**: Function that deletes an entire binary tree.
- **4-binary_tree_is_leaf.c**: Function that checks if a node is a leaf.
- **5-binary_tree_is_root.c**: Function that checks if a node is the root.
- **6-binary_tree_preorder.c**: Function that traverses a binary tree using pre-order traversal.
- **7-binary_tree_inorder.c**: Function that traverses a binary tree using in-order traversal.
- **8-binary_tree_postorder.c**: Function that traverses a binary tree using post-order traversal.
- **9-binary_tree_height.c**: Function that measures the height of a binary tree.
- **10-binary_tree_depth.c**: Function that measures the depth of a node in a binary tree.
- **11-binary_tree_size.c**: Function that measures the size of a binary tree.
- **12-binary_tree_leaves.c**: Function that counts the leaves in a binary tree.
- **13-binary_tree_nodes.c**: Function that counts the nodes with at least one child in a binary tree.
- **14-binary_tree_balance.c**: Function that measures the balance factor of a binary tree.
- **15-binary_tree_is_full.c**: Function that checks if a binary tree is full.
- **16-binary_tree_is_perfect.c**: Function that checks if a binary tree is perfect.
- **17-binary_tree_sibling.c**: Function that finds the sibling of a node.
- **18-binary_tree_uncle.c**: Function that finds the uncle of a node.

## How to Use

To use the provided functions, follow these steps:

1. Include the `binary_trees.h` header file in your source code.
2. Compile your code with the provided source files to create a binary tree and perform operations on it.
3. Call the relevant functions to manipulate and traverse the binary tree.

## AUTHORS

- [Martin Olutade](https://github.com/silgenius)
- [Safia Gibril](https://github.com/Safi222)

### Example

Here is a simple example of how to create a binary tree and perform some basic operations:

```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    binary_tree_insert_left(root, 12);
    binary_tree_insert_right(root, 402);
    binary_tree_insert_left(root->left, 6);
    binary_tree_insert_right(root->left, 56);

    binary_tree_print(root);

    return (0);
}
