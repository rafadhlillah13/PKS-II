#include <iostream>
using namespace std;

int main(){

    float total,barang;

    cout << "   BONUS BELANJA      "<<endl;
    cout<<endl;

    cout<<"Masukkan total belanja anda = "; cin >> total;
    cout<<"Masukkan total barang yang anda beli = "; cin >> barang;

    if (total >= 500000){
        cout << "Selamat anda mendapatkan bonus strika";
        }else if (total >= 100000 && barang > 3 ){
            cout << "Selamat anda mendapatkan bonus payung";
        }else if (total >= 50000 && barang >2){
            cout << "Selamat anda mendapatkan bonus ballpoint";
        }else
            cout << "Maaf, anda tidak mendapatkan bonus";
        cout<<endl;

    return 0;
}