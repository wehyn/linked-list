#pragma once

struct Node {
    int data;
    struct Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = NULL;
    }

    void insertAtBeginning(int val);
    void insertAfter(int val, int pos);
    void insert(int val);
    void removeAt(int pos);
    bool search(int val);
    int getSize();
    bool isEmpty();
    bool isFull();
    void printList();

};

