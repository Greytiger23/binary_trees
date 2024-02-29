#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: list
 * Return: void
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *x, *y;
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
{
return (NULL);
}
x = node->parent;
y = parent->parent;
if (y->left == parent)
{
return (y->right);
}
else
{
return (y->left);
}
}
