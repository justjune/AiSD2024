#include <iostream>
using namespace std;

struct Node 
{
    int data;        
    Node *next;     
    Node(int val) : data(val), next(nullptr) {} 
};

class LinkedList 
{
private:
    Node *head; 
public:
    LinkedList() : head(nullptr) {}

    void append(int val) 
    {
        Node *newNode = new Node(val);
        if (!head) 
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteValue(int val) 
    {
        if (!head) return;
        if (head->data == val) 
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *current = head;
        Node *previous = nullptr;
        while (current && current->data != val) 
        {
            previous = current;
            current = current->next;
        }
        if (!current) return;
        previous->next = current->next;
        delete current;
    }

    void print() 
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << '\n';
    }
};

int main() 
{
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.print(); // Вывод: 1 2 3
    list.deleteValue(2);
    list.print(); // Вывод: 1 3
}