#include <iostream>
using namespace std;

int main (){
    int n,i;

    cout<<"     PROGRAM ANAK AYAM       "<<endl;

    cout << "masukkan jumlah anak ayam = "; cin >> n;
    cout<<endl;
    cout<<"##########################################"<<endl;

    for (i=n ; i>0 ; i--) {
        cout << "tek kotek anak ayam turun "<< i <<endl;
        if (i==1){
            cout<< "tek kotek kotek mati 1 tinggal induknya"<<endl;
            break;
        }
         cout<< "tek kotek kotek mati 1 tinggal " << i-1 <<endl;
    }
    cout<<"##########################################"<<endl;

    return 0;
}