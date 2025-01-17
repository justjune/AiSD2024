#include "L310_099.hpp"
#include <iostream>
using namespace std;

int main() {
    Tree* root = nullptr;
    // Вставка первого "корневого" элемента
    root = insert(root, 7);


    if (root == nullptr or root->data != 7) {
        cout << "Error: Node does not exist or has an invalid value" << '\n';
    }
    else {
        cout << "Success: Node added with value:" << root->data << '\n';
    }

    root = insert(root, 5);
    root = insert(root, 160);
    root = insert(root, 13);


    if (root->right == nullptr or root->right->data != 160) {
        cout << "Error: Node does not exist or has an invalid value" << '\n';
    }
    else {
        cout << "Success: Node added with value:" << root->right->data << '\n';
    }


    if (root->left == nullptr or root->left->data != 5) {
        cout << "Error: Node does not exist or has an invalid value" << '\n';
    }
    else {
        cout << "Success: Node added with value:" << root->left->data << '\n';
    }


    if (root->right->left == nullptr or root->right->left->data != 13) {
        cout << "Error: Node does not exist or has an invalid value" << '\n';
    }
    else {
        cout << "Success: Node added with value:" << root->right->left->data << '\n';
    }

    cout << "All tests passed" << '\n';
    //Удаление бинарного дерева
    delete_tree(root);

    return 0;
}