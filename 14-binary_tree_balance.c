#include "binary_trees.h"

/**
 * get_binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t get_binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + get_binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + get_binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (get_binary_tree_height(tree->left) - get_binary_tree_height(tree->right));

	return (0);
}
