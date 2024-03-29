#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: list
 * Return: void
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t a, b;
if (tree == NULL)
{
return (0);
}
a = binary_tree_size(tree->left);
b = binary_tree_size(tree->right);
return (1 + a + b);
}
