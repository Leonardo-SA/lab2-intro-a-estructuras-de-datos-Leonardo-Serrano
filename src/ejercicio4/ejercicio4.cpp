#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack stack;

    // Solicitar string
    string input;
    cout << "Ingrese un texto: ";
    cin >> input;
    
    cout << "String Original: "<< input << endl;
    string reversed = stack.reverseString(input);
    cout << "String invertido: " << reversed << endl;

    return 0;
}
