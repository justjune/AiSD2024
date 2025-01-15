#ifndef L310_099_HPP
#define L310_099_HPP

struct Tree {
    int data;
    Tree* parent;
    Tree* left;
    Tree* right;
};
Tree* create_tree(Tree* parent, int item);
Tree* insert(Tree* root, int item);
void delete_tree(Tree* root);

#endif