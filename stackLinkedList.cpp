#include <iostream>

using namespace std;

int maks = 5;

int data = 0;

struct Node{
    int value;

    Node *next;

};

Node *head, *tail, *del, *cur, *newNode;

void pushStack(int value){
    if(data == 0){
        head = new Node();
        head->value = value;
        head->next = NULL;
        tail = head;
        data++;
    }
    else if(data == 5){
        cout<<"stack full, tidak bisa nambah stack lagi"<<endl;
    }
    else{
        newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        head = newNode;
        data++;

    }
}

void popStack(){
    del = head;
    head = head->next;
    delete del;
    data--;
}

void isFull(){
    if(data == 5){
        cout<<"data stack sudah full"<<endl;
    }
    else{
        cout<<"data belum full"<<endl;
    }
}

void isEmpty(){
    if(data == 0){
        cout<<"data stack masih kosong"<<endl;
    }
    else{
        cout<<"data sudah terisi"<<endl;
    }
}

void peek(int value){
    cur = head;
    for(int i = 1;i<value;i++){
        cur = cur->next;
    }
    cout<<"data dari stack ke "<<value<<" adalah "<<cur->value<<endl;
}

void change(int posisi, int value){
    cur = head;
    for(int i = 1;i<posisi;i++){
        cur = cur->next;
    }
    cur->value = value;
}

void count(){

}

void destroy(){
    for(int i = 0;i<data;i++){
        del = head;
        head = head->next;
        delete del;
    }
    data = 0;
}

void display(){
    if(data != 0){

        cur = head;
        while(cur != NULL){
            cout<<cur->value<<endl;
            cur = cur->next;
        }
    }
    else{
        cout<<"tidak ada display apa apa kocak, orang stacknya kosong"<<endl;
    }
}


int main(){
    system("cls");

    pushStack(1);
    pushStack(2);
    pushStack(3);
    pushStack(4);
    pushStack(5);

    change(4,10);

    destroy();

    display();




    return 0;
}