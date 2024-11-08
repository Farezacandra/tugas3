#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int maxBarang = 50;            
    string namaBarang;             
    int hargaPerUnit;
    int jumlahTerjual;
    float totalPendapatan;
    int totalBarang = 0;              
    char inputLagi;                      

    do {
        cout << setprecision(12);
        cout << "Barang ke -" << totalBarang + 1 << endl;
        
        cout << "Nama Barang : ";
        cin >> namaBarang;

        cout << "Harga Perbarang " << namaBarang << ": ";
        cin >> hargaPerUnit;

        cout << "Jumlah Barang Terjual " << namaBarang << ": ";
        cin >> jumlahTerjual;

        totalPendapatan = hargaPerUnit * jumlahTerjual;
        totalBarang++;

        cout << "Apakah ingin memasukkan data penjualan lagi? (y/n): ";
        cin >> inputLagi;
        
    } while (inputLagi == 'y' || inputLagi == 'Y');

    cout << endl << "==========================================================================================" << endl;
    cout << "  No   Nama Barang          Harga per Barang     Jumlah Terjual       Total Pendapatan    " << endl;
    cout << "==========================================================================================" << endl;

    for (int i = 0; i < totalBarang; i++) {
        cout << setw(4) << right << i + 1 << "   "
             << setw(15) << left << namaBarang[i]
             << setw(15) << right << hargaPerUnit[i]
             << setw(18) << right << jumlahTerjual[i]
             << setw(26) << right << totalPendapatan[i] << endl;
    }
    cout << "==========================================================================================" << endl;
    
    return 0;
}
