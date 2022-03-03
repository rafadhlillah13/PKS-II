#include <iostream>
using namespace std;

int main (){
	
int q,w,e,r,t;
float rata_rata;

cout<<" Nama : Rafi Fadhlillah"<<endl;
cout<<" Nim : 121450143"<<endl;
cout<<"                                                     "<<endl;
cout<<"====================================================="<<endl;
cout<<"     Program Rata-Rata Tinggi Badan Mahasiswa        "<<endl;
cout<<"====================================================="<<endl;
cout<<"                                                     "<<endl;

cout<<" masukkan tinggi badan mahasiswa 1 : ";
cin>> q;
cout<<" masukkan tinggi badan mahasiswa 2 : ";
cin>> w;
cout<<" masukkan tinggi badan mahasiswa 3 : ";
cin>> e;
cout<<" masukkan tinggi badan mahasiswa 4 : ";
cin>> r;
cout<<" masukkan tinggi badan mahasiswa 5 : ";
cin>> t;
cout<<"                                                     "<<endl;

rata_rata = (q + w + e + r + t) / 5;

cout<<" Rata Rata Tinggi Badan Mahasiswa = " << rata_rata;

	return 0;
}

