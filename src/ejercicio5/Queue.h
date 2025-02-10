#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <climits> // Para INT_MIN
#include "Node.h"

using namespace std;

class Queue {
    private:
        Node* first;  // Puntero al primer nodo de la cola
        Node* last;   // Puntero al último nodo de la cola
        int length;   // Longitud de la cola (número de elementos)

    public:
        // Constructor por defecto: inicializa una cola vacía
        Queue() {
            first = nullptr;
            last = nullptr;
            length = 0;
        }

    bool isEmpty() {
        return length == 0;
    }

    void enqueue(int value, int priority) {
        Node* newNode = new Node(value, priority);
        if (isEmpty()) {
            first = newNode;
            last = newNode;
        } else {
            Node* temp = first;
            Node* prev = nullptr;
            while (temp && temp->priority <= priority) {
                prev = temp;
                temp = temp->next;
            }
            if (!prev) {
                newNode->next = first;
                first = newNode;
            } else if (!temp) {
                prev->next = newNode;
                last = newNode;
            } else {
                prev->next = newNode;
                newNode->next = temp;
            }
        }
        length++;
    }

    // Método para desencolar
    int dequeue() {
        if (isEmpty()) {
            cout << "La cola está vacía. No se puede desencolar.\n";
            return -1;
        }
        Node* temp = first;
        int dequeuedValue = first->value;
        first = first->next;
        delete temp;
        length--;
        if (length == 0) last = nullptr;
        return dequeuedValue;
    }

    int front() {
        if (isEmpty()) {
            cout << "La cola está vacía.\n";
            return -1;
        }
        return first->value;
    }

    // Método para actualizar la prioridad
    void updatePriority(int value, int newPriority) {
        if (isEmpty()) {
            cout << "La cola está vacía. No se puede actualizar la prioridad.\n";
            return;
        }

        Node* temp = first;
        Node* prev = nullptr;

        while (temp) {
            if (temp->value == value) {
                if (prev) prev->next = temp->next;
                else first = temp->next;

                if (temp == last) last = prev;
                length--;

                enqueue(value, newPriority);
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }

        cout << "Ticket no encontrado.\n";
    }

    // Método para impresión
    void printQueue() {
        Node* temp = first;
        while (temp) {
            cout << "Value: " << temp->value << ", Priority: " << temp->priority << endl;
            temp = temp->next;
        }
    }
};

#endif // QUEUE_H
