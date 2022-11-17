#include "binary_trees.h"
/**
 * binary_tree_preorder - perform Pre-order traversal
 * @tree: pointer to binary
 * @func: poiner to function
 * Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
