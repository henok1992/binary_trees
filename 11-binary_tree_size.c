#include "binary_trees.h"
/**
 * binary_tree_size - perform and calculate size
 * @tree: pointer to binary
 * Return: void
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t i = 0;
if (tree == NULL)
return (0);
if (tree->n)
i++;
i = i + binary_tree_size(tree->left);
i = i + binary_tree_size(tree->right);
return (i);
}
