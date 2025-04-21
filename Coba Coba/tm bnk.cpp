#include <iostream>
#include <limits> // Untuk menangani input yang tidak valid

using namespace std;

int main() {
    int saldo = 1000000; // Saldo awal
    int pin = 1234;      // PIN yang benar
    int inputPin;
    int pilihan;
    int jumlahPenarikan;

    cout << "Selamat Datang di ATM Sederhana" << endl;

    // Meminta input PIN
    cout << "Masukkan PIN Anda: ";
    cin >> inputPin;

    // Validasi PIN
    if (inputPin != pin) {
        cout << "PIN Salah. Akses ditolak." << endl;
        return 1; // Keluar program dengan kode error
    }

    // Menu utama setelah PIN benar
    do {
        cout << "\nMenu Utama:" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Tarik Tunai" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        // Validasi input menu
         while (cin.fail()) {
            cout << "Input tidak valid. Masukkan angka antara 1-3." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> pilihan;
        }

        switch (pilihan) {
            case 1:
                cout << "Saldo Anda: Rp " << saldo << endl;
                break;
            case 2:
                cout << "Masukkan jumlah penarikan: Rp ";
                cin >> jumlahPenarikan;

                //Validasi input jumlah penarikan
                while (cin.fail() || jumlahPenarikan <= 0) {
                    cout << "Input tidak valid. Masukkan jumlah yang benar." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cin >> jumlahPenarikan;
                }
                if (jumlahPenarikan > saldo) {
                    cout << "Saldo tidak mencukupi." << endl;
                } else {
                    saldo -= jumlahPenarikan;
                    cout << "Penarikan berhasil. Sisa saldo Anda: Rp " << saldo << endl;
                }
                break;
            case 3:
                cout << "Terima kasih telah menggunakan ATM ini." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 3);

    return 0;
}
