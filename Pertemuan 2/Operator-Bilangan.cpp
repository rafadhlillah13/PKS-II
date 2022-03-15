#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2;
    int max, min;
    string status1, status2;
    
    cout<<"================================="<<endl;
    cout<<"         OPERATOR BILANGAN       "<<endl;
    cout<<"================================="<<endl;
    cout<<endl;
    cout<<" Masukkan Bilangan 1 : ";
    cin >> bilangan1;
    cout<<" Masukkan Bilangan 2 : ";
    cin >> bilangan2;
    
    if (bilangan1 > bilangan2) {
        max = bilangan1;
        min = bilangan2;
    } else {
        max = bilangan2;
        min = bilangan1;
    }
    if (max > 0 && max % 2 == 1) {
        status1 = "(Positif, Ganjil)";
    } else {
        if (max < 0 && max % 2 == 0) {
            status1 = "(Negatif, Genap)";
        }
    }
    if (min < 0 && max % 2 == 1) {
        status2 = "(Negatif, Genap)";
    } else {
        if (min < 0 && min % 2 == 0) {
            status2 = "(Positif, Ganjil)";
        }
    }
    cout << " Bilangan Terbesar : " << max << status1 << endl;
    cout << " Bilangan Terkecil : " << min << status2 << endl;
    return 0;
}

