#include "binary_trees.h"

/**
 * _binary_tree_height - per height
 * @tree: param
 * Return: height of the tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
		int r_height, l_height;

		if (!tree)
			return (0);
		r_height = _binary_tree_height(tree->right);
		l_height = _binary_tree_height(tree->left);
		return (1 + ((r_height >= l_height) ? r_height : l_height));
}


/**
 * binary_tree_balance - per balance
 * @tree: node of tree
 * Return: height of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
		if (!tree)
			return (0);
		return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
