#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

// Deklarasi struct untuk data perusahaan
struct Perusahaan {
    string namaPerusahaan;
    string alamat;
    string nomorTelepon;
    string email;
    vector<string> daftarKaryawan;
};

// Fungsi untuk membaca data perusahaan dari file
void bacaDataPerusahaan(vector<Perusahaan>& perusahaan) {
    ifstream fileInput("data_perusahaan.txt"); // Ganti nama file sesuai kebutuhan

    if (fileInput.is_open()) {
        string baris;

        while (getline(fileInput, baris)) {
            Perusahaan perusahaanBaru;

            // Membaca data perusahaan
            getline(fileInput, perusahaanBaru.namaPerusahaan);
            getline(fileInput, perusahaanBaru.alamat);
            getline(fileInput, perusahaanBaru.nomorTelepon);
            getline(fileInput, perusahaanBaru.email);

            // Membaca data karyawan
            while (getline(fileInput, baris) && baris != "|") {
                perusahaanBaru.daftarKaryawan.push_back(baris);
            }

            // Menambahkan data perusahaan ke vector
            perusahaan.push_back(perusahaanBaru);
        }

        fileInput.close();
    } else {
        cout << "Gagal membuka file data perusahaan!" << endl;
    }
}

// Fungsi untuk menampilkan data perusahaan dalam tabel
void cetakTabelPerusahaan(const vector<Perusahaan>& perusahaan) {
    // Mengatur lebar kolom tabel
    cout << setfill('-') << setw(50) << left << "Nama Perusahaan" << setw(20) << "Alamat"
         << setw(20) << "No. Telepon" << setw(30) << "Email" << endl;

    // Menampilkan data perusahaan dalam tabel
    for (const Perusahaan & perusahaan : perusahaan) {
        cout << setw(50) << left << perusahaan.namaPerusahaan << setw(20) << perusahaan.alamat
             << setw(20) << perusahaan.nomorTelepon << setw(30) << perusahaan.email << endl;

        // Menampilkan data karyawan
        cout << setw(50) << left << "Karyawan:" << endl;
        for (const string & karyawan : perusahaan.daftarKaryawan) {
            cout << setw(50) << left << " - " << karyawan << endl;
        }

        cout << endl; // Menambahkan baris kosong antar perusahaan
    }
}

int main() {
    // Deklarasi vector untuk menyimpan data perusahaan
    vector<Perusahaan> perusahaan;

    // Membaca data perusahaan dari file
    bacaDataPerusahaan(perusahaan);

    // Menampilkan data perusahaan dalam tabel
    cetakTabelPerusahaan(perusahaan);

    return 0;
}
