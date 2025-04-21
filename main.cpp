#include <iostream>
#include "eDll/DoublyLinkedLists.h"

using namespace std;

int main() {

    DoublyLinkedLists<int> list1;
    DoublyLinkedLists<char> list2('a');
    DoublyLinkedLists<double> list3;

    cout << "Comprobar si las listas estan vacia: " << endl;
    cout << "Lista 1: " << boolalpha << list1.empty() << endl;
    cout << "Lista 2: " << boolalpha << list2.empty() << endl;
    cout << "Lista 3: " << boolalpha << list3.empty() << endl;

    list1.push_back(2);
    list1.push_back(15);
    list1.push_back(17);
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(8);

    list2.push_back('b');
    list2.push_back('c');
    list2.push_back('d');
    list2.push_back('e');
    list2.push_back('f');
    list2.push_back('g');
    list2.push_back('h');

    list3.push_back(18.5);
    list3.push_back(19.5);
    list3.push_back(20.5);
    list3.push_back(21.5);
    list3.push_back(22.5);
    list3.push_back(23.5);
    list3.push_back(24.5);
    list3.push_back(25.5);

    cout << "Comprobar si las listas estan vacia: " << endl;
    cout << "Lista 1: " << boolalpha << list1.empty() << endl;
    cout << "Lista 2: " << boolalpha << list2.empty() << endl;
    cout << "Lista 3: " << boolalpha << list3.empty() << endl;

    cout << "Estado actual de la lista 1: " << endl;
    list1.show();
    cout << "Estado actual de la lista 2: " << endl;
    list2.show();
    cout << "Estado actual de la lista 3: " << endl;
    list3.show();

    cout << "Tamaño de la lista 1: " << list1.getSize() << endl;
    cout << "Tamaño de la lista 2: " << list2.getSize() << endl;
    cout << "Tamaño de la lista 3: " << list3.getSize() << endl;

    cout << "Primer elemento de la lista 1: " << endl;
    cout << list1.front() << endl;

    cout << "Primer elemento de la lista 2: " << endl;
    cout << list2.front() << endl;

    cout << "Primer elemento de la lista 3: " << endl;
    cout << list3.front() << endl;

    cout << "Último elemento de la lista 1: " << endl;
    cout << list1.back() << endl;

    cout << "Último elemento de la lista 2: " << endl;
    cout << list2.back() << endl;

    cout << "Último elemento de la lista 3: " << endl;
    cout << list3.back() << endl;


    list1.push_front(3);
    list1.push_front(1);
    list2.push_front('y');
    list2.push_front('x');
    list3.push_front(32.8);
    list3.push_front(10.2);

    cout << "Estado actual de la lista 1: " << endl;
    list1.show();
    cout << "Estado actual de la lista 2: " << endl;
    list2.show();
    cout << "Estado actual de la lista 3: " << endl;
    list3.show();

    list1.push_back(25);
    list1.push_back(26);
    list2.push_back('w');
    list2.push_back('z');
    list3.push_back(35.4);
    list3.push_back(27.8);

    cout << "Estado actual de la lista 1: " << endl;
    list1.show();

    cout << "Se elimina primer elemento de la lista 1: " << list1.pop_front() << endl;

    cout << "Estado actual de la lista 1: " << endl;
    list1.show();


    cout << "Estado actual de la lista 2: " << endl;
    list2.show();

    cout << "Se elimina primer elemento de la lista 2: " << list2.pop_front() << endl;

    cout << "Estado actual de la lista 2: " << endl;
    list2.show();


    cout << "Estado actual de la lista 3: " << endl;
    list3.show();

    cout << "Se elimina primer elemento de la lista 3: " << list3.pop_front() << endl;

    cout << "Estado actual de la lista 3: " << endl;
    list3.show();


    cout << "Estado actual de la lista 1: " << endl;
    list1.show();

    cout << "Se elimina último elemento de la lista 1: " << list1.pop_back() << endl;

    cout << "Estado actual de la lista 1: " << endl;
    list1.show();


    cout << "Estado actual de la lista 2: " << endl;
    list2.show();

    cout << "Se elimina último elemento de la lista 2: " << list2.pop_back() << endl;

    cout << "Estado actual de la lista 2: " << endl;
    list2.show();


    cout << "Estado actual de la lista 3: " << endl;
    list3.show();

    cout << "Se elimina último elemento de la lista 3: " << list3.pop_back() << endl;

    cout << "Estado actual de la lista 3: " << endl;
    list3.show();


    cout << "Insertar elemento en el primer lugar de la lista 1" << endl;
    list1.insert(27,0);
    list1.show();

    cout << "Insertar elemento en el último lugar de la lista 2" << endl;
    list2.insert('r',list2.getSize());
    list2.show();

    cout << "Insertar elemento en el index cinco de la lista 3" << endl;
    list3.insert(45.3,5);
    list3.show();


    cout << "Remover elemento en el primer lugar de la lista 1" << endl;
    list1.remove(0);
    list1.show();

    cout << "Remover elemento en el último lugar de la lista 2" << endl;
    list2.remove(list2.getSize() - 1);
    list2.show();

    cout << "Remover elemento en el index cinco de la lista 3" << endl;
    list3.remove(5);
    list3.show();

    list1.show();
    cout << list1[2] << endl;

    list2.show();
    cout << list2[3] << endl;

    list3.show();
    cout << list3[1] << endl;

    cout << "Invertir la lista 1" << endl;
    list1.show();
    list1.reverse();
    list1.show();

    cout << "Invertir la lista 2" << endl;
    list2.show();
    list2.reverse();
    list2.show();

    cout << "Invertir la lista 3" << endl;
    list3.show();
    list3.reverse();
    list3.show();


    cout << "Limpiar la lista 1" << endl;
    list1.show();
    list1.clear();
    cout << boolalpha << list1.empty() << endl;

    cout << "Limpiar la lista 2" << endl;
    list2.show();
    list2.clear();
    cout << boolalpha << list2.empty() << endl;

    cout << "Limpiar la lista 3" << endl;
    list3.show();
    list3.clear();
    cout << boolalpha << list3.empty() << endl;

    return 0;
}