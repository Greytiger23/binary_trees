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
size_t a, b;
if (tree == NULL)
{
return (0);
}
a = binary_tree_height(tree->left);
b = binary_tree_height(tree->right);
return (1 + max(a, b));
}
/**
 * max - function that gives the max
 * @x: list
 * @y: list
 * Return: void
 */
size_t max(size_t x, size_t y)
{
return ((x > y) ? x : y);
}
