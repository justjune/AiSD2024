#include <iostream>
using namespace std;

struct Tree {
    int data;
    Tree* parent;
    Tree* left;
    Tree* right;
};

Tree* search_tree(Tree* tree, int item) {
    if (tree == NULL) return NULL;
    if (tree->data == item) return tree;
    if (item < tree->data) {
        return (search_tree(tree->left, item));
    }
    else {
        return (search_tree(tree->right, item));
    }
}

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
    root = insert(root, 5);
    root = insert(root, 160);
    root = insert(root, 13);

    if (search_tree(root, 7) != NULL) {
        cout << "Node with value " << search_tree(root, 7)->data << " found" << '\n';
    }
    else {
        cout << "Node not found" << '\n';
    }

    if (search_tree(root, 5) != NULL) {
        cout << "Node with value " << search_tree(root, 5)->data << " found" << '\n';
    }
    else {
        cout << "Node not found" << '\n';
    }

    if (search_tree(root, 160) != NULL) {
        cout << "Node with value " << search_tree(root, 160)->data << " found" << '\n';
    }
    else {
        cout << "Node not found" << '\n';
    }

    if (search_tree(root, 13) != NULL) {
        cout << "Node with value " << search_tree(root, 13)->data << " found" << '\n';
    }
    else {
        cout << "Node not found" << '\n';
    }





    if (search_tree(root, 20) != NULL) {
        cout << "Node with value " << search_tree(root, 20)->data << " found" << '\n';
    }
    else {
        cout << "Node not found" << '\n';
    }
    if (search_tree(root, 189) != NULL) {
        cout << "Node with value " << search_tree(root, 189)->data << " found" << '\n';
    }
    else {
        cout << "Node not found" << '\n';
    }


    cout << "All tests passed" << '\n';

    delete_tree(root);
}

int main()
{
    test();
    return 0;
}
