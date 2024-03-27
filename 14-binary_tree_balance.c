#include <stddef.h>
#include <stdlib.h>

/* Binary tree structure definition */
typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function to get the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return (left_height > right_height ? left_height : right_height) + 1;
}

/* Function to measure the balance factor of a binary tree */
int binary_tree_balance(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return (int)(left_height - right_height);
}
