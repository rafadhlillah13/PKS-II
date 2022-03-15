#include <iostream>
using namespace std;

int main (){
    int bilangan;

    cout << "============================="<<endl;
    cout << "     PROGRAM GANJIL GENAP    "<<endl;
    cout << "============================="<<endl;
    cout<<endl;

    cout <<" masukkan bilangan : ";
    cin >> bilangan;

    //Genap apabila nilainya habis dibagi dengan 2
    if (bilangan % 2==0){
        cout << " Bilangan Genap ";
    } else {
        //Ganjil apabila sisa bagi sama dengan 1
        if (bilangan % 2==1){
            cout << " Bilangan Ganjil "; 
        }
    }

    return 0;
}
