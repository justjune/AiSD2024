#include "L310_099.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

void print_tree(Tree* root, ofstream& out, string prefix = "", bool isLeft = false){
    if(root == nullptr) return;
    
    out << prefix;
    
    if(prefix.empty()){
        out << "(root) ";
    }
    else if(isLeft){
        out << "(L) ";
    }
    else{
        out << "(R) ";
    }
    
    out << root->data << '\n';
    
    print_tree(root->left, out, prefix + " ", true);
    print_tree(root->right, out, prefix + " ", false);
}

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

    print_tree(root,out_file);
    
    out_file.close();
    delete_tree(root);
    return 0;
}