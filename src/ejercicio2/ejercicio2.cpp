#include <iostream>
#include <sstream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList list;
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
    cout << "Lista original: \n";
    list.printList();

    // Llamar al método reverse
    list.removeDuplicates();

    cout << "Lista sin duplicados: \n";
    list.printList();

    return 0;
}
