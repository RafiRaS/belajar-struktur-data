#include <iostream>

using namespace std;


struct Asal{
    string domisili;

};

struct Hobi{
    string hb;
};

struct Siswa{
    string nama;
    int umur;

    Asal dom;


    Hobi hby;


    string cewe[2];

};


int main(){
    Siswa siswa[2];

    siswa[0].nama = "abdu";
    siswa[0].umur = 10;
    siswa[0].dom.domisili = "depok brow";
    siswa[0].hby.hb = "main wanita";
    siswa[0].cewe[0] = "karina mutiara anjani";
    siswa[0].cewe[1] = "salwa anindya anggraini";

    siswa[1].nama = "labubu";
    siswa[1].umur = 11;
    siswa[1].dom.domisili = "ambalabu";
    siswa[1].hby.hb = "onani";
    siswa[1].cewe[0] = "dapa rahman";
    siswa[1].cewe[1] = "zidan dicky";

    system("cls");

    for(int i = 0;i<2;i++){

        cout<<siswa[i].nama<<endl;
        cout<<siswa[i].umur<<endl;
        cout<<siswa[i].dom.domisili<<endl;
        cout<<siswa[i].hby.hb<<endl;
        cout<<siswa[i].cewe[0]<<endl;
        cout<<siswa[i].cewe[1]<<endl;

        cout<<endl;

    }


    return 0;
}