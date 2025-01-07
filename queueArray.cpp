#include <iostream>

using namespace std;

int max = 5;
int data = 0;
int array[5];


void enqueue(int value){
    if(data>=5){
        cout<<"antirian sudah full"<<endl;
    }else{
        array[data]= value;
        data++;
    }
}

void dequeue(){
    if(data == 0){
        cout<<"data kosong, tidak bisa menghapus apa apa"<<endl;
    }else{
        for(int i = 0;i<data-1;i++){
            array[i] = array[i+1];
        }
        array[data-1] = 0;
        data--;
    }
}

void isFull(){
    if(data>=5){
        cout<<"antrian sudah penuh"<<endl;
    }else{
        cout<<"antrian masih tersisa"<<endl;
    }
}

void isEmpty(){
    if(data<=0){
        cout<<"antrian masih kosong"<<endl;
    }
    else{
        cout<<"antrian masih tersisa"<<endl;
    }
}

void count(){
    cout<<"ada "<<data<<" yang sedang mengantri"<<endl;
}

void destroy(){
    for(int i = 0;i<data;i++){
        array[i] = 0;
    }
    data = 0;
}

void display(){
    for(int i = 0;i<data;i++){
        cout<<array[i]<<endl;
    }
    if(data<=0){
        cout<<"antrian masih kosong"<<endl;
    }
}

int main(){
    system("cls");
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    destroy();


    display();


    return 0;
}