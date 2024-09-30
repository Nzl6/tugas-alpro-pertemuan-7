#include <iostream>
using namespace std;
    int pokok (int jam) {
        return jam * 7500;
    }

    int lembur (int jam) {
        int jamLembur = jam - 8;
        if ( jam > 8 ){
            return (jam - 8)*(7500*1.5);
        }
        return 0;
    }

    int makan (int jam){
        if (jam >9){
            return 10000;
        }
        return 0;
    }

    int transport (int jam){
        if (jam > 10){
            return 13000;
        }
        return 0;
    }

int main (){
    string nama, nip;
    int jam;

    cout << "Penghitungan Gaji Harian Karyawan PT. XYZ";
    cout << "\nNama : ";
    cin >> nama;
    cout << "NIP : ";
    cin >> nip;
    cout << "Masukan Jumlah Jam Kerja : ";
    cin >> jam;

    int gajiPokok = pokok (jam);
    int uangLembur = lembur (jam);
    int uangMakan = makan (jam);
    int uangTransport = transport (jam);
    int jumlahGaji = gajiPokok + uangLembur + uangMakan + uangTransport;

    cout << "\nNama : " << nama;
    cout << "\nNIP : " << nip;
    cout << "\nGaji Pokok : Rp " << gajiPokok;
    cout << "\nUang Lembur : Rp " << uangLembur;
    cout << "\nUang Makan : Rp " << uangMakan;
    cout << "\nUang Transportasi : Rp " << uangTransport << endl;
    cout << "\nJumlah Gaji : Rp " << jumlahGaji;

    return 0;
}
