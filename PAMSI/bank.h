#ifndef PAMSI_BANK_H
#define PAMSI_BANK_H

#endif //PAMSI_BANK_H
#include <stdlib.h>
#include <string>
#include <iostream>

/*
 * Klasa która tworzy węzeł
 *  who - nazwa węzła (klienta w kolejce)
 *  prev - wskaźnik na poprzedni element
 *  next - wskaźnik na następny element
 */
class Who{
    std::string who;
    Who* prev;
    Who* next;
    friend class Queue;
};

/*
 * Klasa lecząca węzły (kolejka)
 *  howManyPeople - ile osób jest w kolejce
 *  head - głowa
 *  tail - ogon
 *  funkcje:
 *      addEnd - dodaje element na końcu kolejki
 *      isEmpty - sprawdza czy ktoś stoi w kolejce
 *      removeFront - usuwa pierwsza osobę z kolejki
 *      howMany - zwraca ilość osób ustawionych w kolejce
 *      peek - zwraca imię pierwszej osoby w kolejce
 */

class Queue{
private:
    int howManyPeople = 0;
    Who* head;
    Who* tail;
public:
    Queue();
    void addEnd(std::string  elem);
    bool isEmpty();
    void removeFront();
    int howMany();
    std::string peek();
};