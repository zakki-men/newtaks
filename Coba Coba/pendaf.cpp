#include <iostream>
#include <vector>
#include <string>
#include <limits> // Untuk menangani input yang tidak valid
#include <iomanip> // Untuk format output tabel

using namespace std;

struct Peserta {
    string nama;
    string noPeserta;
    string kategori;
};

int main() {
    vector<Peserta> daftarPeserta;
    int pilihan;

    do {
        cout << "\nSistem Pendaftaran Lomba" << endl;
        cout << "1. Daftar Peserta" << endl;
        cout << "2. Lihat Daftar Peserta" << endl;
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
            case 1: {
                Peserta pesertaBaru;
                cout << "Masukkan Nama: ";
                cin.ignore(); // Membersihkan newline dari buffer
                getline(cin, pesertaBaru.nama);
                cout << "Masukkan Nomor Peserta: ";
                cin >> pesertaBaru.noPeserta;
                cout << "Masukkan Kategori Lomba: ";
                cin.ignore(); // Membersihkan newline dari buffer
                getline(cin, pesertaBaru.kategori);
                daftarPeserta.push_back(pesertaBaru);
                cout << "Pendaftaran Berhasil!" << endl;
                break;
            }
            case 2: {
                if (daftarPeserta.empty()) {
                    cout << "Belum ada peserta yang terdaftar." << endl;
                } else {
                    cout << "\nDaftar Peserta:" << endl;
                    cout << "+---------------------+-----------------+---------------------+" << endl;
                    cout << "| Nama                | Nomor Peserta   | Kategori Lomba      |" << endl;
                    cout << "+---------------------+-----------------+---------------------+" << endl;
                    for (const auto& peserta : daftarPeserta) {
                        cout << "| " << setw(19) << left << peserta.nama << "| " << setw(15) << left << peserta.noPeserta << "| " << setw(19) << left << peserta.kategori << "|" << endl;
                    }
                    cout << "+---------------------+-----------------+---------------------+" << endl;
                }
                break;
            }
            case 3:
                cout << "Terima kasih telah menggunakan sistem ini." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 3);

    return 0;
}
