#include <iostream>
using namespace std;

int main (){
    //deklarasi case 1
    int pil1,pil2,pil3,pilihan;
    float ratarata1,ratarata2,ratarata3;
    char yn;
    float pu,ppu,pbm,pk,ma,fi,ki,bi;

    //deklarasi case 2
    int inter,nas,prov,kabkot,Jumlah_sertifikat;
    float ma2,fi2,ki2,bi2,ratarata4;   

    do {
    cout << "       Program Analisa Masuk PTN (SAINTEK)       "<<endl;
    cout << "1. SBMPTN " << endl;
    cout << "2. SNMPTN " << endl;
    cout << "3. MANDIRI " << endl;

        cout << "masukkan pilihan" <<endl;
        cin >> pilihan;
        cout<<endl;

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
            ratarata3 = (pu+pbm+ppu+pk+ma+fi+ki+bi) / 8;
            cout << "Rata Rata TPS = " << ratarata1<<endl;
            cout << "Rata Rata TKA = " << ratarata2<<endl;
            cout << "Rata Rata TKA+TPS = " << ratarata3<<endl;

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
            else if (fi2 > ma && fi > ki && fi > bi)
            cout << "Nilai terbesar TKA = " << fi << "(Fisika)"<<endl;
            else if (ki > ma && ki > fi && ki > bi)
            cout << "Nilai terbesar TKA = " << ki2 << "(Kimia)"<<endl;
            else if (bi > ma && bi > fi && bi > ki)
            cout << "Nilai terbesar TKA = " << bi << "(Biologi)"<<endl;
            cout<<endl;
            

            if (ratarata3 > 700){
            cout << "Anda bisa memilih PTN Klaster 1"<< endl;
            }else if (ratarata3 > 575){
            cout << "Anda bisa memilih PTN Klaster 2"<< endl;
            }else if (ratarata3 > 525){
            cout << "Anda bisa memilih PTN Klaster 3"<< endl;
            }else {
            cout << "Anda bisa memilih PTN Klaster 4"<< endl;
            }
            
            if (pu && pk > pbm && ppu || ma && fi > ki && bi){
            cout << "Anda disarankan untuk memilih : "<<endl; 
            cout << "Fakultas Teknik, Fakultas MIPA,Fakultas Ilmu Komputer, FKIP"<<endl;
            }else if (pu && pk < pbm && ppu || ma && fi < ki && bi){
            cout << "Anda disarankan untuk memilih : "<<endl; 
            cout << "Fakultas Kedokteran, Fakultas MIPA, Fakultas Pertanian, Fakultas Kesehatan Masyarakat, FKIP"<<endl;
            }else if (pu && pbm < pk && ppu || ma && ki < bi && fi){
            cout << "Anda disarankan untuk memilih : "<<endl; 
            cout << "Fakultas MIPA, Fakultas Pertanian, Fakultas Kesehatan Masyarakat, FKIP"<<endl;
            }else if (ppu && pk > pbm && pu || ma && ki > fi && bi){
            cout << "Anda disarankan untuk memilih : "<<endl; 
            cout << "Fakultas MIPA,Fakultas Ilmu Komputer, FKIP"<<endl;
            }else {
            cout << "Anda disarankan untuk memilih : "<<endl; 
            cout << "Fakultas MIPA, FKIP"<<endl;
            }
            break;

            case 2 :
            cout << "Masukkan Jumlah Sertifikat : " <<endl;
            cout << "Internasional  = "; cin >> inter;
            cout << "Nasional       = "; cin >> nas;
            cout << "Provinsi       = "; cin >> prov;
            cout << "Kabupaten/kota = "; cin >> kabkot;
            cout << endl; 
      
            cout << "Masukkan Nilai Rapot Anda : " <<endl;
            cout << "Matematika     = "; cin >> ma2;
            cout << "Fisika         = "; cin >> fi2;
            cout << "Kimia          = "; cin >> ki2;
            cout << "Biologi        = "; cin >> bi2;
            cout << endl;
      
            ratarata4 = (ma2+fi2+ki2+bi2) / 4;
            Jumlah_sertifikat = (inter+nas+prov+kabkot);
            cout <<"Jumlah total sertifikat = " <<Jumlah_sertifikat<<endl;
            cout <<"Rata-rata nilai rapot   = " <<ratarata4<<endl;
            
            if (ma2 > fi2 && ma2 > ki2 && ma2 > bi2)
            cout << "Nilai mata pelajaran terbesar = " << ma << "(Matematika)"<<endl;
            else if (fi2 > ma2 && fi2 > ki2 && fi2 > bi2)
            cout << "Nilai mata pelajaran terbesar adalah = " << fi2 << "(Fisika)"<<endl;
            else if (ki2 > ma2 && ki2 > fi2 && ki2 > bi2)
            cout << "Nilai mata pelajaran terbesar adalah = " << ki2 << "(Kimia)"<<endl;
            else if (bi2 > ma2 && bi2 > fi2 && bi2 > ki2)
            cout << "Nilai mata pelajaran terbesar  = " << bi2 << "(Biologi)"<<endl;
            cout<<endl;
                         
            if (ratarata4 > 90)
            cout << "Anda bisa memilih PTN Klaster ke-1"<< endl;
            else if (ratarata4 > 85)
            cout << "Anda bisa memilih PTN Klaster ke-2"<< endl;
            else if (ratarata4 > 82 )
            cout << "Anda bisa memilih PTN Klaster ke-3"<< endl;
            else if (ratarata4 < 78)
            cout << "Anda bisa memilih PTN Klaster ke-4"<< endl;
            cout << endl;

            if (ma2 + fi2 > ki2 + bi2 ){
            cout << "Anda disarankan untuk memilih : "<<endl; 
            cout << "Fakultas Teknik, Fakultas MIPA ,Fakultas Ilmu Komputer, FKIP"<<endl;
            }else {
            cout << "Anda disarankan untuk memilih : "<<endl; 
            cout << "Fakultas Kedokteran, Fakultas MIPA, Fakultas Pertanian, Fakultas Kesehatan Masyarakat, FKIP";
            cout << endl;
            }
            break;
        }
            

    cout<<endl;
    cout << "Apakah anda ingin kembali ke menu awal ? (y/n)" <<endl;
    cin >> yn;
    } while (yn == 'y' || yn == 'Y');

    return 0;
}
