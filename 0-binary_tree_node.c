#include <stdlib.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: binary tree node
 * @value: integer
 * Return: void
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *a = malloc(sizeof(binary_tree_t));
if (a == NULL)
{
return (NULL);
}
a->n = value;
a->parent = parent;
a->left = NULL;
a->right = NULL;
return (a);
}
