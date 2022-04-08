#include <iostream>
using namespace std;

int main (){

int i,umur,max=0;
float n,ratarata,jumlah=0;

cout << "   PROGRAM SURVEI PAK RT   "<<endl;
cout<<"Jumlah Pemuda = "; cin>>n;

for (i=1; i<=n; i++){
cout<<"Umur Pemuda "<< i <<" = ";
cin>>umur;
jumlah = jumlah + umur;

 if(umur>max){
 max=umur;
 }
}
cout<<endl;
cout<<"Ketua terpilih = "<<max<<endl;
cout << "rata-rata umur pemuda = "<< jumlah/n;
return 0;
}
