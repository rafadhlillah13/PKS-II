#include <iostream>
using namespace std;

int main (){
    
    float a,b,hasil;
    int pilihan;
    string operasi;

    cout<<"     PROGRAM KALKULATOR SEDERHANA        "<<endl;
    cout<<endl;
    cout << "Berikut adalah pilihannya"<<endl;
    cout << " 1. Penjumlahan "<<endl;
    cout << " 2. Pengurangan "<<endl;
    cout << " 3. Perkalian "<<endl;
    cout << " 4. Pembagian "<<endl;
    cout<<endl;
    cout<< "Masukkan pilihan anda = "<<endl;
    cin >> pilihan;
    cout<<endl;

    cout << "==================================="<<endl;
    switch (pilihan){
        case 1 :
        cout<< "Masukkan a = "; cin >> a;
        cout<< "Masukkan b = "; cin >> b;
        hasil = a + b;
        cout << "Hasil = "<< hasil <<endl;
        break;

        case 2 :
        cout<< "Masukkan a = "; cin >> a;
        cout<< "Masukkan b = "; cin >> b;
        hasil = a - b;
        cout << "Hasil = "<< hasil <<endl;
        break;

        case 3 :
        cout<< "Masukkan a = "; cin >> a;
        cout<< "Masukkan b = "; cin >> b;
        hasil = a * b;
        cout << "Hasil = "<< hasil <<endl;
        break;

        case 4 :
        cout<< "Masukkan a = "; cin >> a;
        cout<< "Masukkan b = "; cin >> b;
        hasil = a / b;
        cout << "Hasil = "<< hasil <<endl;
        break;
    }
    
    cout << a << operasi << b << "=" << hasil;
    cout << "==================================="<<endl;


    return 0;
}