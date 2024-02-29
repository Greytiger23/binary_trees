#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 * @parent: list
 * @value: integer
 * Return: void
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *a;
if (parent == NULL)
{
return (NULL);
}
a = malloc(sizeof(binary_tree_t));
if (a == NULL)
{
return (NULL);
}
a->n = value;
a->parent = parent;
a->left = NULL;
if (parent->right != NULL)
{
parent->right->parent = a;
a->right = parent->right;
}
else
{
a->right = NULL;
}
parent->right = a;
return (a);
}
