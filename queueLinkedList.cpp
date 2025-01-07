#include <iostream>

using namespace std;
int data = 0;
int maks = 5;

struct Mahasiswa{
    string nama;

    Mahasiswa *next;
};

Mahasiswa *head,*cur,*tail,*del,*newNode;

void enqueue(string nama){
    if(data == 0){
        head = new Mahasiswa();
        head->nama = nama;
        head->next = NULL;
        tail = head;
    }else{
        newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
    data++;
}

void dequeue(){
    if(data <= 0){
        cout<<"data kosong, tidak ada data yang bisa diapus"<<endl;

    }else{

        del = head;
        head = head->next;
        delete del;
        data--;
    }
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
    cur = head;
    while(cur!=NULL){
        cout<<cur->nama<<endl;
        cur = cur->next;
    }
    if(data >= 0){
        cout<<"data kosong"<<endl;
    }
}

int main(){

    system("cls");

    enqueue("kayin");
    enqueue("abdu");
    enqueue("selamanya");
    enqueue("forever");
    enqueue("together");

    destroy();


    display();

    return 0;
}