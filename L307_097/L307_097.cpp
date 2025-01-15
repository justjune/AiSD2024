// Гаренских Семен, МЕН-233202. Алгоритм поиска элемента в бинарном дереве, страница 97 листинг 3.07
#include "L307_097.hpp"


Tree* search_tree(Tree* tree, int item) { //Функция поиска в бинарном дереве
    if (tree == nullptr) return nullptr;
    if (tree->data == item) return tree;
    if (item < tree->data) {
        return (search_tree(tree->left, item));
    }
    else {
        return (search_tree(tree->right, item));
    }
}

Tree* create_tree(Tree* parent, int item) { //Функция создания бинарного дерева
    Tree* node = new Tree;
    node->parent = parent;
    node->data = item;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Tree* insert(Tree* root, int item) { //Функция вставки в бинарное дерево
    if (root == nullptr) {
        return create_tree(nullptr, item);
    }

    if (item < root->data) {
        if (root->left == nullptr) {
            root->left = create_tree(root, item);
        }
        else {
            root->left = insert(root->left, item);
        }
    }
    else {
        if (root->right == nullptr) {
            root->right = create_tree(root, item);
        }
        else {
            root->right = insert(root->right, item);
        }
    }

    return root;
}

void delete_tree(Tree* root) { //Удаление бинарного дерева
    if (root == nullptr) return;
    delete_tree(root->right);
    delete_tree(root->left);
    delete root;
}
