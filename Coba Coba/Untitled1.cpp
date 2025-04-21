#include <iostream>
#include <string>
using namespace std;

struct Karyawan {
    int id;
    string nama;
    string jabatan;
    float gaji;
};

class Perusahaan {
private:
    Karyawan karyawan[100];
    int jumlahKaryawan;

public:
    Perusahaan() : jumlahKaryawan(0) {}

    void tambahKaryawan(int id, string nama, string jabatan, float gaji) {
        if (jumlahKaryawan < 100) {
            karyawan[jumlahKaryawan].id = id;
            karyawan[jumlahKaryawan].nama = nama;
            karyawan[jumlahKaryawan].jabatan = jabatan;
            karyawan[jumlahKaryawan].gaji = gaji;
            jumlahKaryawan++;
            cout << "Data karyawan berhasil ditambahkan.\n";
        } else {
            cout << "Kapasitas penuh, tidak bisa menambah data.\n";
        }
    }

    void tampilkanKaryawan() const {
        cout << "\nDaftar Karyawan:\n";
        for (int i = 0; i < jumlahKaryawan; i++) {
            cout << "ID: " << karyawan[i].id << ", Nama: " << karyawan[i].nama 
                 << ", Jabatan: " << karyawan[i].jabatan << ", Gaji: " << karyawan[i].gaji << "\n";
        }
    }

    void cariKaryawan(int id) const {
        for (int i = 0; i < jumlahKaryawan; i++) {
            if (karyawan[i].id == id) {
                cout << "Data Karyawan Ditemukan:\n";
                cout << "ID: " << karyawan[i].id << ", Nama: " << karyawan[i].nama 
                     << ", Jabatan: " << karyawan[i].jabatan << ", Gaji: " << karyawan[i].gaji << "\n";
                return;
            }
        }
        cout << "Karyawan dengan ID " << id << " tidak ditemukan.\n";
    }
};

int main() {
    Perusahaan perusahaan;
    int pilihan;
    do {
        cout << "\n===== Sistem Basis Data Perusahaan =====\n";
        cout << "1. Tambah Karyawan\n";
        cout << "2. Tampilkan Semua Karyawan\n";
        cout << "3. Cari Karyawan berdasarkan ID\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int id;
                string nama, jabatan;
                float gaji;
                cout << "Masukkan ID Karyawan: ";
                cin >> id;
                cout << "Masukkan Nama Karyawan: ";
                cin.ignore();  // Membersihkan newline character
                getline(cin, nama);
                cout << "Masukkan Jabatan Karyawan: ";
                getline(cin, jabatan);
                cout << "Masukkan Gaji Karyawan: ";
                cin >> gaji;
                perusahaan.tambahKaryawan(id, nama, jabatan, gaji);
                break;
            }
            case 2:
                perusahaan.tampilkanKaryawan();
                break;
            case 3: {
                int id;
                cout << "Masukkan ID Karyawan yang dicari: ";
                cin >> id;
                perusahaan.cariKaryawan(id);
                break;
            }
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    return 0;
}

