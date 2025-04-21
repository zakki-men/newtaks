#include <iostream>
#include <vector>
#include <string>
#include <limits> // Untuk menangani input yang salah

using namespace std;

struct Akun {
    string nomorRekening;
    string pin;
    double saldo;
};

vector<Akun> daftarAkun;

// Fungsi untuk membersihkan buffer input
void clearInputBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Fungsi untuk menampilkan menu utama
void tampilkanMenu() {
    cout << "\n--- Menu ATM ---" << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Tarik Tunai" << endl;
    cout << "3. Setor Tunai" << endl;
    cout << "4. Keluar" << endl;
    cout << "Masukkan pilihan Anda: ";
}

// Fungsi untuk verifikasi PIN
bool verifikasiPIN(const Akun& akun, const string& pin) {
    return akun.pin == pin;
}

int main() {
    // Inisialisasi data akun (contoh)
    daftarAkun.push_back({"1234567890", "1234", 1000000});
    daftarAkun.push_back({"0987654321", "5678", 500000});

    string nomorRekening, pin;
    int pilihan;

    cout << "Selamat datang di ATM!" << endl;
    cout << "Masukkan Nomor Rekening: ";
    cin >> nomorRekening;

    // Cari akun berdasarkan nomor rekening
    for (Akun& akun : daftarAkun) {
        if (akun.nomorRekening == nomorRekening) {
            cout << "Masukkan PIN: ";
            cin >> pin;

            if (verifikasiPIN(akun, pin)) {
                do {
                    tampilkanMenu();
                    cin >> pilihan;

                    // Validasi input pilihan
                    if (cin.fail()) {
                        cout << "Input tidak valid. Harap masukkan angka." << endl;
                        cin.clear();
                        clearInputBuffer();
                        continue;
                    }

                    switch (pilihan) {
                        case 1:
                            cout << "Saldo Anda: Rp" << akun.saldo << endl;
                            break;
                        case 2: {
                            double jumlahTarik;
                            cout << "Masukkan jumlah yang akan ditarik: Rp";
                            cin >> jumlahTarik;
                            if (cin.fail() || jumlahTarik <= 0 || jumlahTarik > akun.saldo) {
                                cout << "Jumlah penarikan tidak valid." << endl;
                                cin.clear();
                                clearInputBuffer();
                            } else {
                                akun.saldo -= jumlahTarik;
                                cout << "Penarikan berhasil. Sisa saldo Anda: Rp" << akun.saldo << endl;
                            }
                            break;
                        }
                        case 3: {
                            double jumlahSetor;
                            cout << "Masukkan jumlah yang akan disetor: Rp";
                            cin >> jumlahSetor;
                            if (cin.fail() || jumlahSetor <= 0) {
                                cout << "Jumlah setoran tidak valid." << endl;
                                cin.clear();
                                clearInputBuffer();
                            } else {
                                akun.saldo += jumlahSetor;
                                cout << "Setoran berhasil. Saldo Anda sekarang: Rp" << akun.saldo << endl;
                            }
                            break;
                        }
                        case 4:
                            cout << "Terima kasih telah menggunakan ATM!" << endl;
                            break;
                        default:
                            cout << "Pilihan tidak valid." << endl;
                    }
                } while (pilihan != 4);
                return 0; // Keluar dari program setelah transaksi selesai
            } else {
                cout << "PIN salah." << endl;
                return 1; // Mengindikasikan kesalahan PIN
            }
        }
    }

    cout << "Nomor rekening tidak ditemukan." << endl;
    return 1; // Mengindikasikan nomor rekening tidak ditemukan
}
