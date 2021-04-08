#include "bank.h"


Queue::Queue() {
    head = new Who;
    head->who = "glowa";
    tail = new Who;
    tail->who = "ogon";
    head->next = tail;
    tail->prev = head;
}

void Queue::addEnd(std::string elem) {
    ++howManyPeople;
    Who* newElem = new Who;
    newElem->next = tail;
    newElem->prev = tail->prev;
    newElem->who = elem;
    tail->prev->next = newElem;
    tail->prev = newElem;
}

int Queue::howMany() {
    return howManyPeople;
}

void Queue::removeFront() {
    Who* del = head->next;
    head->next->next->prev = head;
    head->next->prev->next = head->next->next;
    delete del;
    --howManyPeople;
}

bool Queue::isEmpty() {
    if(head->next == tail)
        return true;
    else
        return false;
}


std::string Queue::peek() {
    return head->next->who;
}
