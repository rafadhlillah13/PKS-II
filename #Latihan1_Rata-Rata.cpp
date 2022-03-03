// Rata Rata Pendapatan

#include <iostream>
using namespace std;

int main (){
	int p1,p2,p3,p4,p5;
	float rata_rata;
	
	cout<< "Masukkan pendapatan anda tahun 2015:" << endl;
	cin >> p1;
	cout<< "Masukkan pendapatan anda tahun 2016:" << endl;
	cin >> p2;
	cout<< "Masukkan pendapatan anda tahun 2017:" << endl;
	cin >> p3;
	cout<< "Masukkan pendapatan anda tahun 2018:" << endl;
	cin >> p4;
	cout<< "Masukkan pendapatan anda tahun 2019:" << endl;
	cin >> p5;
	
	rata_rata= (p1+p2+p3+p4+p5)/5;
	
	cout << "Rata-Rata Pendapatan : "<< rata_rata;
	}
	

