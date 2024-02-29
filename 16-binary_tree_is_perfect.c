#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "binary_trees.h"

bool perrecu(const binary_tree_t *tree, size_t x, size_t y);
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: list
 * Return: void
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t a;
if (tree == NULL)
{
return (0);
}
a = binary_tree_height(tree);
return (perrecu(tree, 0, a));
}
/**
 * perrecu - function that recursive
 * @tree: list
 * @x: list
 * @y: list
 * Return: void
 */
bool perrecu(const binary_tree_t *tree, size_t x, size_t y)
{
if (tree == NULL)
{
return (true);
}
if (tree->left == NULL && tree->right == NULL)
{
return (x == y);
}
if (tree->left == NULL || tree->right == NULL)
{
return (false);
}
return (perrecu(tree->left, x + 1, y) && perrecu(tree->right, x + 1, y));
}
