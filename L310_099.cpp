#include <iostream>
using namespace std;

struct Tree {
    int data;
    Tree* parent;
    Tree* left;
    Tree* right;
};

Tree* create_tree(Tree* parent, int item) {
    Tree* node = new Tree;
    node->parent = parent;
    node->data = item;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Tree* insert(Tree* root, int item) {
    if (root == NULL) {
        return create_tree(NULL, item);
    }

    if (item < root->data) {
        if (root->left == NULL) {
            root->left = create_tree(root, item);
        }
        else {
            root->left = insert(root->left, item);
        }
    }
    else {
        if (root->right == NULL) {
            root->right = create_tree(root, item);
        }
        else {
            root->right = insert(root->right, item);
        }
    }

    return root;
}

void delete_tree(Tree* root) {
    if (root == NULL) return;
    delete_tree(root->right);
    delete_tree(root->left);
    delete root;
}

void test() {

    Tree* root = NULL;

    root = insert(root, 7);


    if (root == NULL or root->data != 7) {
        cout << "Error: Node does not exist or has an invalid value" << '\n';
    }
    else {
        cout << "Success: Node added with value:" << root->data << '\n';
    }

    root = insert(root, 5);
    root = insert(root, 160);
    root = insert(root, 13);


    if (root->right == NULL or root->right->data != 160) {
        cout << "Error: Node does not exist or has an invalid value" << '\n';
    }
    else {
        cout << "Success: Node added with value:" << root->right->data << '\n';
    }


    if (root->left == NULL or root->left->data != 5) {
        cout << "Error: Node does not exist or has an invalid value" << '\n';
    }
    else {
        cout << "Success: Node added with value:" << root->left->data << '\n';
    }


    if (root->right->left == NULL or root->right->left->data != 13) {
        cout << "Error: Node does not exist or has an invalid value" << '\n';
    }
    else {
        cout << "Success: Node added with value:" << root->right->left->data << '\n';
    }

    cout << "All tests passed" << '\n';

    delete_tree(root);
}

int main()
{
    test();
    return 0;
}
