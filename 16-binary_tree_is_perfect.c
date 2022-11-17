#include "binary_trees.h"
/**
 * binary_tree_is_full - check full or not
 * @tree: tree of binary
 * Return: 0 if not full or 1 for full
*/
bool is_perfect(const binary_tree_t *root, int d, int level);
int depth(const binary_tree_t *node);
int  binary_tree_is_perfect(const binary_tree_t *tree)
{
    int d;
    if (tree == NULL)
    return (0);
d = depth(tree);
  return is_perfect(tree, d, 0);
}

int depth(const binary_tree_t *node) {
  int d = 0;
  while (node != NULL) {
    d++;
    node = node->left;
  }
  return d;
}

bool is_perfect(const binary_tree_t *root, int d, int level) {
  if (root == NULL)
    return true;
  if (root->left == NULL && root->right == NULL)
    return (d == level + 1);

  if (root->left == NULL || root->right == NULL)
    return false;

  return is_perfect(root->left, d, level + 1) &&
       is_perfect(root->right, d, level + 1);
}
