#include <stddef.h>
#include <stdlib.h> // for the abs() function

/* Binary tree structure definition */
typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function to get the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* Function to measure balance factor of a binary tree */
int binary_tree_balance(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;

    /* Calculate the height of the left and right subtrees */
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    /* Calculate the balance factor */
    return (int)(left_height - right_height);
}

/* Function to get the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;

    /* Recursively calculate the height of the left and right subtrees */
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    /* Return the maximum height of the left and right subtrees plus 1 */
    return 1 + ((left_height > right_height) ? left_height : right_height);
}
