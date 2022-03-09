#include <iostream>
using namespace std;

int main (){

    int bilangan;
    string keterangan;

    cout<<"===================================="<<endl;
    cout<<"     PROGRAM KELOMPOK BILANGAN      "<<endl;
    cout<<"===================================="<<endl;
    cout<<" Masukkan bilangan : " ; 
    cin>>bilangan;

    if (bilangan > 0){
        keterangan = " Bilangan Positif ";
       } else if (bilangan < 0){
           keterangan = " Bilangan Negatif ";
        }else
            keterangan = " Bilangan NOL ";

    cout << "Bilangan = " << bilangan <<endl;
    cout << "Kelompok = " << keterangan;


            return 0;
    
}
