#include <iostream>
#include "L307_097.hpp"
using namespace std;

int main() {

    Tree* root = NULL;

    int tree_list[4] = { 7,5,160,13 };

    for (int i = 0; i < 4; ++i) {
        root = insert(root, tree_list[i]);

    }

    int search_list[6] = { 7,5,160,13,20,6 };
    for (int i = 0; i < 6; ++i) {
        cout << "Finding an node with a value: " << search_list[i] << '\n';
        Tree* current_el = search_tree(root, search_list[i]);
        if (current_el != NULL) {

            cout << "Node with value " << current_el->data << " found" << '\n';
        }
        else {
            cout << "Node not found" << '\n';
        }
    }
    cout << "All tests passed";

    delete_tree(root);
    return 0;
}