#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: list
 * Return: void
 */

int binary_tree_balance(const binary_tree_t *tree)
{
size_t a, b;
if (tree == NULL)
{
return (0);
}
a = binary_tree_height(tree->left);
b = binary_tree_height(tree->right);
return (a - b);
}
