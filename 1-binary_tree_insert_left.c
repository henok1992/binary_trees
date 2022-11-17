#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node on right
 * @parent: root of node
 * @value: value of the node
 * Return: Null if fails otherwise new node address
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node, *temp;
if (parent == NULL)
{
return (NULL);
}
new_node = binary_tree_node(parent, value);
if (parent->left == NULL)
{
parent->left = new_node;
}
else
{
temp = parent->left;
parent->left = new_node;
new_node->parent = parent;
new_node->left = temp;
temp->parent = new_node;
}
return (new_node);
}
