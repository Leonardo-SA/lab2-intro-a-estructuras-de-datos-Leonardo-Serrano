#include <iostream>
#include <sstream>
#include "DoublyLinkedList.h"

using namespace std;

int main() {
    DoublyLinkedList list;
    string input;

    cout << "Ingrese los valores de la lista (Presione 'Enter' para finalizar): ";
    
    // Leer la línea completa de entrada
    getline(cin, input);
    
    // Crear un flujo de entrada a partir de la cadena
    istringstream stream(input);
    int value;
    
    // Extraer valores enteros del flujo
    while (stream >> value) {
        list.append(value);
    }
    
    // Esta parte del codigo no debe ser modificada
    cout << "Lista Original: ";
    list.printList();
    cout << "\n¿Es palíndromo?: " << (list.isPalindrome() ? "Sí" : "No") << endl;

    return 0;
}
