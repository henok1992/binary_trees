#include "binary_trees.h"
/**
 * binary_tree_leaves - perform and calculate size
 * @tree: pointer to binary
 * Return: void
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t i = 0;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
i++;
i = i + binary_tree_leaves(tree->left);
i = i + binary_tree_leaves(tree->right);
return (i);
}
