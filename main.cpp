#include <iostream>
#include "eDll/DoublyLinkedLists.h"

using namespace std;

int main() {

    DoublyLinkedLists<int> list1;
    DoublyLinkedLists<char> list2('a');
    DoublyLinkedLists<double> list3;

    cout << "Elemento inicial de la lista 2: " << list2.front() << endl;

    cout << "Se agrega elemento al inicio de la lista 1: " << endl;
    list1.push_front(1);

    cout << "Elemento inicial de la lista 1: " << list1.front() << endl;

    cout << "Se agrega elemento al inicio de la lista 2: " << endl;
    list2.push_back('b');

    cout << "Elemento final de la lista 2: " << list2.back() << endl;

    cout << "Se agrega elemento al final de la lista 3: " << endl;
    list3.push_back(18.5);

    cout << "Elemento inicial de la lista 1: " << list3.front() << endl;

    //cout << "Se elimina elemento de la lista 2: " << list2.pop_front() << endl;

    cout << "Elemento inicial de la lista 2: " << list2.front() << endl;

    cout << "Estado actual de la lista 2: " << endl;
    list2.show();

    cout << "Tamaño de la lista 2: " << endl;
    cout << list2.getSize() << endl;

    cout << "Insertar elemento en el segundo lugar de la lista " << endl;
    list2.insert('f',1);

    cout << "Insertar elemento en el segundo lugar de la lista " << endl;
    list2.insert('g',1);

    cout << "Estado actual de la lista 2: " << endl;
    list2.show();

    cout << "Eliminar elemento en el segundo lugar de la lista " << endl;
    list2.remove(2);

    cout << "Estado actual de la lista 2: " << endl;
    list2.show();

    list2.reverse();

    cout << "Estado actual de la lista 2: " << endl;
    list2.show();

    cout << "Elemento en el tercer lugar de la lista 2: " << list2[2] << endl;

    return 0;
}