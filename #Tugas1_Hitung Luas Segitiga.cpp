#include <iostream>
using namespace std;

int main (){
	//l=luas a=alas t=tinggi
	float l,a,t;
	cout<<" Nama:Rafi Fadhlillah"<<endl;
	cout<<" Nim:121450143"<<endl;

	cout<<"                                        "<<endl;
	cout<<" ======================================== "<<endl;
	cout<<"    Program Menghitung Luas Segitiga    "<<endl;
	cout<<"                                        "<<endl;
	cout<<" Masukkan a : ";
	cin>> a;
	cout<<" Masukkan t : ";
	cin>> t;
	
	l = (a * t) / 2;
	cout<<"                                        "<<endl;
	cout<<" Luas Segitiga = "<< l << endl;
	cout<<" ======================================== "<<endl;
	
	return 0;
}
