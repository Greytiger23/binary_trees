#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "binary_trees.h"

bool binary_recu(const binary_tree_t *tree);
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: list
 * Return: void
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (binary_recu(tree) ? 1 : 0);
}
/**
 * binary_recu - function that recursive
 * @tree: list
 * Return: void
 */
bool binary_recu(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (true);
}
if (tree->left == NULL && tree->right == NULL)
{
return (true);
}
if (tree->left != NULL && tree->right != NULL)
{
return (binary_recu(tree->left) && binary_recu(tree->right));
}
return (false);
}
