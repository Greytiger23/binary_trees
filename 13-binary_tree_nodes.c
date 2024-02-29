#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: list
 * Return: void
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
int a;
size_t x, y;
if (tree == NULL)
{
return (0);
}
a = (tree->left != NULL || tree->right != NULL);
x = binary_tree_nodes(tree->left);
y = binary_tree_nodes(tree->right);
return (x + y + a);
}
