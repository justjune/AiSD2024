#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "L307_097.hpp"
using namespace std;

int main() {

    Tree* root = NULL;
    string filename = "test.txt";
    ifstream file;
    file.open(filename);
    
    if(!file.is_open()){
        cout << "Error" << '\n';
        return 0;
    }
    
    string line, last_line;
    vector <int> tree_list;
    
    while(getline(file,line)){
        last_line = line;
    }
    
    stringstream string_stream(last_line);
    string tree_el;
    
    while(getline(string_stream,tree_el,',')){
        tree_list.push_back(stoi(tree_el));
    }
    
    file.close();
    
    for(int num : tree_list){
        root = insert(root, num);
    }

    string out_name = "test_out.txt";
    ofstream out_file;
    out_file.open(out_name);
    
    if(!out_file.is_open()){
        cout << "Error" << '\n';
        return 0;
    }

    for (int num : tree_list) {
        out_file << "Finding an node with a value: " << num << '\n';
        Tree* current_el = search_tree(root, num);
        if (current_el != NULL) {

            out_file << "Node with value " << current_el->data << " found" << '\n';
        }
        else {
            out_file << "Node not found" << '\n';
        }
    }    
    
    out_file.close();
    delete_tree(root);
    return 0;
}