#ifndef L307_097_HPP
#define L307_097_HPP

struct Tree {
	int data;
    Tree* parent;
    Tree* left;
    Tree* right;
};
Tree* search_tree(Tree* tree, int item);
Tree* create_tree(Tree* parent, int item);
Tree* insert(Tree* root, int item);
void delete_tree(Tree* root);

#endif
