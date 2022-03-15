#include <iostream>
using namespace std;

int main(){
    int a, b, c, hasil1, hasil2, hasil3, hasil4;

    cout << "######################################" << endl;
    cout << "   MACAM-MACAM OPERATOR LOGIKA     " << endl;
    cout << "######################################" << endl;
    cout << "Masukan nilai A = "; cin >> a;
    cout << "Masukan Nilai B = "; cin >> b;
    cout << endl;

	//and
    hasil1 = a && b;
    //or
    hasil2 = a || b;
    //not
    hasil3 = !(hasil1);
    hasil4 = !(hasil2);

    cout << "= Program Ekspresi AND =" << endl;
    cout << "************************" << endl;
    cout << "Hasil dari a && b = " << hasil1 << endl;

    cout << "= Program Ekspresi OR =" << endl;
    cout << "************************" << endl;
    cout << "Hasil dari a || b = " << hasil2 << endl;

    cout << "= Program Ekspresi NOT =" << endl;
    cout << "************************" << endl;
    cout << "Hasil dari !(a && b) = " << hasil3 << endl;
    cout << "Hasil dari !(a || b) = " << hasil4 << endl;
return 0;
}


