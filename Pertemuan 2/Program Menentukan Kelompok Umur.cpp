#include <iostream>
using namespace std;

int main(){

    int umur;
    string nama,kelompok;

    cout<<"======================================"<<endl;
    cout<<"         Operator AND            "<<endl;
    cout<<"      PROGRAM KELOMPOK UMUR          "<<endl;
    cout<<"======================================"<<endl;

    cout<<" Nama Anda : ";
    cin>>nama;
    cout<<" Masukkan Umur Anda : ";
    cin>>umur;

    if (umur > 3 && umur < 6){
        kelompok = "Balita";
    }else if (umur > 6 && umur < 11){
        kelompok = "Anak-anak";
    }else if (umur > 11 && umur < 18){
        kelompok = "Remaja";
    }else if (umur > 17){
        kelompok = "Dewasa";
    }else {
        kelompok = "Bayi";
    }

    cout << "Nama : "<< nama <<endl;
    cout << "Umur : " << umur << endl;
    cout << "Kelompok : " << kelompok;

}


