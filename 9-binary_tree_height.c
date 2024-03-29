#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: list
 * Return: void
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t a = 0, b = 0;
if (tree == NULL)
{
return (0);
}
a = tree->left ? 1 + binary_tree_height(tree->left) : 0;
b = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((a > b) ? a : b);
}
