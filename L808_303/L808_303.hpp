#ifndef L808_303_HPP
#define L808_303_HPP

#define MAXLEN 2

struct Cell {
    int cost;    
    int parent;
};

void row_init(int i);            
void column_init(int i);         
int match(char a, char b);        
int insert(char c);               
int del(char c);                 
void goal_cell(const char* s, const char* t, int* i, int* j);
int string_compare(const char* s, const char* t);

#endif