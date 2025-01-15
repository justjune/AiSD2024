#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int h(char a) {
    return static_cast<int>(a); // Returns ASCII value of the character
}

int p(char a, char b, char c) {
    if (a == 'а' && b == 'а' && c == 'а') {
        return h(a);
    } else if (a == 'b' && b == 'а' && c == 'а') {
        return h(a) * h(b);
    } else if (a == 'c' && b == 'b' && c == 'b') {
        return h(b) + h(c);
    } else if (a == 'd' && b == 'b' && c == 'b') {
        return h(d) + h(b); // 'd' should be defined or passed as a parameter
    } else {
        return 0; // Default return value
    }
}

int main() {
    cout << "p(а, а, а) = " << p('а', 'а', 'а') << std::endl;
    cout << "p(b, а, а) = " << p('b', 'а', 'а') << std::endl;
    cout << "p(c, b, b) = " << p('c', 'b', 'b') << std::endl;
    cout << "p(d, b, b) = " << p('d', 'b', 'b') << std::endl;

    return 0;
}