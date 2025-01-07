#include <iostream>

using namespace std;

struct Node{
    int value;


    Node *next;
    Node *prev;

};

Node *head,*tail,*newNode,*cur,*before,*del;

void createAwal(int getValue){
    head = new Node();
    head->value = getValue;
    head->next = NULL;
    head->prev = NULL;
    tail = head;
}

void createHead(int getValue){
    newNode = new Node();
    newNode->value = getValue;
    newNode->next = head;
    head->prev = newNode;
    newNode->prev = NULL;
    head = newNode;
}

void createTengah(int posisi,int getValue){
    newNode = new Node();
    newNode->value = getValue;
    cur = head;
    for(int i = 1;i<posisi;i++){
        if(i==posisi-1){
            before = cur;
        }
        
        cur = cur->next;
    }
    before->next = newNode;
    newNode->prev = before;
    newNode->next = cur;
    cur->prev = newNode;
}

void createTail(int getValue){
    newNode = new Node();
    newNode->value = getValue;
    newNode->next = NULL;
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void deleteHead(){
    del = head;
    head = head->next;
    head->prev=NULL;
    delete del;
}

void deleteTail(){
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    del = tail;
    cur->next = NULL;
    tail = cur;
    delete del;

}

void deleteTengah(int posisi){
    cur = head;

    for(int i = 1;i<posisi;i++){
        if(i==posisi-1){
            before = cur;
        }
        
        cur = cur->next;
    }

    del = cur;
    cur = cur->next;
    before->next = cur;
    cur->prev = before;
    delete del;


}

void printDoubleLinkedList(){
    cur = head;
    while(cur!=NULL){
        cout<<cur->value<<endl;
        cur = cur->next;
    }
}

int main(){

    system("cls");
   
    createAwal(1);

    createHead(2);

    createTail(3);
    createTail(33);
    createTail(32);
    createTail(11);

    deleteTengah(4);

    printDoubleLinkedList();


    return 0;
}