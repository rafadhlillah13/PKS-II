#include <iostream>
using namespace std;

int main (){
    int awal,jumlah=0,n,i=1,angka;

    cout << "masukkan nilai awal = " ; cin >> awal;
    cout << "masukkan angka = "; cin >> angka;
    cout << "masukkan perulangan = " ; cin >> n;

    while (i <= n){
            
           jumlah = jumlah  + angka;
           i++;
    }
        cout << "Jumlah = " << jumlah + awal;
    return 0;
}