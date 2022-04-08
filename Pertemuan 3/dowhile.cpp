#include <iostream>
#include <string>

using namespace std;
int main()
{
   int angka, pangkat, i=1, jumlah =1;
   cout << "Masukkan angka = ";
   cin >> angka;
   cout << "Masukkan Pangkat = ";
   cin >> pangkat;
  
    do
   {
    jumlah =jumlah * angka;
    i++;
   }
    while (i <= pangkat);
    cout << "hasil = " << jumlah << endl;

  return 0;
}
