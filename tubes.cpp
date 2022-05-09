#include <iostream>
using namespace std;

int main (){
    int pil1,pil2,pil3,pilihan;
    float ratarata1,ratarata2;
    char yn;
    float pu,ppu,pbm,pk,ma,fi,ki,bi;

    cout << "       Program Analisa Masuk PTN (SAINTEK)       "<<endl;
    cout << "1. SBMPTN " << endl;
    cout << "2. SNMPTN " << endl;
    cout << "3. MANDIRI " << endl;

    do {
        cout << "masukkan pilihan" <<endl;
        cin >> pilihan;

        switch (pilihan){
            case 1 :
            cout << "masukkan nilai utbk anda" << endl;
            cout << "TPS" << endl;
            cout << "Penalaran Umum                 = "; cin >> pu;
            cout << "Pengetahuan & Pemahaman umum   = "; cin >> ppu;
            cout << "Pemahaman bacaan dan menulis   = "; cin >> pbm;
            cout << "Penalaran Kuantitatif          = "; cin >> pk;
            cout<<endl;
            cout << "TKA" << endl;
            cout << "Matematika     = "; cin >> ma;
            cout << "Fisika         = "; cin >> fi;
            cout << "Kimia          = "; cin >> ki;
            cout << "Biologi        = "; cin >> bi;
            cout<<endl;
            ratarata1 = (pu+pbm+ppu+pk) / 4;
            ratarata2 = (ma+fi+ki+bi) / 4;
            cout << "Rata Rata TPS = " << ratarata1<<endl;
            cout << "Rata Rata TKA = " << ratarata2<<endl;

            if (pu > pk && pu > ppu && pu > pbm)
            cout << "Nilai terbesar TPS = " << pu << "(Penalaran Umum)"<<endl;
            else if (ppu > pu && ppu > pk && ppu > pbm)
            cout << "Nilai terbesar TPS = " << ppu << "(Pengetahuan & Pemahaman umum)"<<endl;
            else if (pbm > pu && pbm > pk && pbm > ppu)
            cout << "Nilai terbesar TPS = " << pbm << "(Pemahaman bacaan dan menulis)"<<endl;
            else if (pk > pu && pk > pbm && pk > ppu)
            cout << "Nilai terbesar TPS = " << pk << "(Penalaran Kuantitatif)"<<endl;
            
            if (ma > fi && ma > ki && ma > bi)
            cout << "Nilai terbesar TKA = " << ma << "(Matematika)"<<endl;
            else if (fi > ma && fi > ki && fi > bi)
            cout << "Nilai terbesar TKA = " << fi << "(Fisika)"<<endl;
            else if (ki > ma && ki > fi && ki > bi)
            cout << "Nilai terbesar TKA = " << ki << "(Kimia)"<<endl;
            else if (bi > ma && bi > fi && bi > ki)
            cout << "Nilai terbesar TKA = " << bi << "(Biologi)"<<endl;
            cout<<endl;

            if (ratarata1 > 700 && ratarata2 > 700)
            cout << "Anda bisa memilih PTN Klaster 1"<< endl;
            else if (ratarata1 > 575 && ratarata2 > 575)
            cout << "Anda bisa memilih PTN Klaster 2"<< endl;
            else if (ratarata1 > 525 && ratarata2 > 525)
            cout << "Anda bisa memilih PTN Klaster 3"<< endl;
            else if (ratarata1 < 525 && ratarata2 < 525)
            cout << "Anda bisa memilih PTN Klaster 4"<< endl;
            cout << endl;
            
            if (pu && pk > pbm && ppu || ma && fi > ki && bi){
            cout << "KONDISI 1 : "<<endl;
            cout << "Jika nilai TPS anda lebih besar di : "<<endl;
            cout << "Penalaran Umum dan Penalaran Kuantiatif "<<endl;
            cout << "Jika nilai TKA anda lebih besar di : "<<endl;
            cout << "Matematika dan Fisika "<<endl;
            cout<<endl;
            cout << "Hasil : Silahkan memilih Fakultas Teknik, Fakultas MIPA,Fakultas Ilmu Komputer, FKIP"<<endl;
            cout<<endl;

            }else 
            cout << "KONDISI 2 : "<<endl;
            cout << "Jika nilai TPS anda lebih besar di : "<<endl;
            cout << "Pemahaman bacaan dan menulis dan Pengetahuan & Pemahaman umum  "<<endl;
            cout << "Jika nilai TKA anda lebih besar di : "<<endl;
            cout << "Kimia dan Biologi "<<endl;
            cout <<endl;
            cout << "Hasil : Silahkan memilih Fakultas Kedokteran, Fakultas MIPA, Fakultas Pertanian, Fakultas Kesehatan Masyarakat, FKIP";
            
        }

    } while (yn == 'y' || yn == 'Y');

    return 0;
}