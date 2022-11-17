#include "binary_trees.h"
/**
 * binary_tree_height - perform inorder traversal
 * @tree: pointer to binary
 * Return: void
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t i = 0, j = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL)
i++;
if (tree->right != NULL)
j++;
i = i + binary_tree_height(tree->left);
j = j + binary_tree_height(tree->right);
if (i > j)
return (i);
else
return (j);
}
