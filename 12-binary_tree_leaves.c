#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: list
 * Return: void
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t a, b;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
a = binary_tree_leaves(tree->left);
b = binary_tree_leaves(tree->right);
return (a + b);
}
