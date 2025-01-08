#include <iostream>

using namespace std;

struct HashTable{

    string id,pw;

}dataAkun[26];

int hashFunction(string password){
    return tolower(password[0]) - 97 ;
}

void menuAwal(){
    cout<<"pilihan menu"<<endl;
    cout<<"1.daftar"<<endl;
    cout<<"2.login"<<endl;
    cout<<"3.keluar"<<endl;
    
}

int main(){


    return 0;
}