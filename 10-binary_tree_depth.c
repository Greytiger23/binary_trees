#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree
 * @tree: list
 * Return: void
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t d = 0;
if (tree == NULL)
{
return (0);
}
while (tree->parent != NULL)
{
a++;
tree = tree->parent;
}
return (a);
}
