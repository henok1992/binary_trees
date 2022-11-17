#include "binary_trees.h"
/**
 * binary_tree_depth - perform inorder traversal
 * @tree: pointer to binary
 * Return: void
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t i = 0;
if (tree == NULL)
return (0);
if (tree->parent != NULL)
{
i++;
i = i + binary_tree_depth(tree->parent);
}
return (i);
}
