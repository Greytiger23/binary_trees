#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: binary tree insert left
 * @value: integer
 * Return: void
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
a->right = NULL;
if (parent->left != NULL)
{
parent->left->parent = a;
a->left = parent->left;
}
else
{
a->left = NULL;
}
parent->left = a;
return (a);
}
