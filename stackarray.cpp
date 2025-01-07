#include <iostream>

using namespace std;

int maks = 5;
int array[5];
int top = 0 ;

void pushStack(int value){
    if(top>=5){
        cout<<"tidak bisa push, data penuh"<<endl;

    }else{
        array[top] = value;
        top++;
    }
}

void popStack(){
    if(top <= 0){
        cout<<"tidak ada data yang bisa dihapus"<<endl;
    }else{
        array[top-1] = 0;
        top--;
    }
}

void isFull(){
    if(top>=5){
        cout<<"stack full"<<endl;
    }
    else{
        cout<<"stack tidak full"<<endl;
    }
}

void isEmpty(){
    if(top<=0){
        cout<<"stack kosong"<<endl;
    }else{
        cout<<"stack tidak kosong"<<endl;
    }
}

void peek(int value){
    cout<<"data ke "<<value<<" memilki nilai "<<array[top-value]<<endl;
}
void change(int posisi, int value){
    array[top-posisi] = value; 
}

void count(){
    cout<<"banyak data = "<<top<<endl;
}

void destroy(){
    for(int i = 0;i<top-1;i++){
        array[i] = 0;
    }
    top = 0;
}

void display(){
    if(top <= 0){
        cout<<"stack kosong"<<endl;
    }else{
        for(int i = top-1;i>=0;i--){
            cout<<array[i]<<endl;
        }
    }
}


int main(){
    system("cls");

    pushStack(5);
    pushStack(4);
    pushStack(3);
    pushStack(2);
    pushStack(1);


    destroy();



    display();




    return 0;
}