#include <iostream>

using namespace std;

struct Node{
    int value;

    Node *next;
    Node *prev;
};

Node *head, *tail,*newNode,*cur,*before,*del;

void createAwal(int getValue){
    head = new Node();
    head->next = head;
    head->prev = head;
    head->value = getValue;
    tail = head;
}

void createHead(int getValue){
    newNode = new Node();
    newNode->value = getValue;
    newNode->next = head;
    newNode->prev = tail;
    head = newNode;
    tail->next = head;
}

void createTail(int getValue){
    newNode = new Node();
    newNode->value = getValue;
    newNode->next = head;
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
    head->prev = tail;
}

void deleteHead(){
    del = head;
    head = head->next;
    head->prev = tail;
    tail->next = head;
    delete del;
}

void deleteTail(){
    del = tail;
    cur = head;
    while(cur->next!=tail){
        cur = cur->next;
    }
    cur->next = head;
    tail = cur;
    head->prev = tail;
    delete del;
}

void printLinkedList(){
    cur = head;
    while(cur!=tail){
        cout<<cur->value<< endl;
        cur = cur->next;
    }
    cout<<cur->value<< endl;
}


int main(){     
    system("cls");

    createAwal(1);

    createHead(2);

    createHead(4);

    createTail(3);

    createTail(7);


    printLinkedList();




    return 0;
}