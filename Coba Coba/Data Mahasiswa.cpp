#include <iostream>
#include <string>
#include <vector> // menggunakan STL vector untuk Flaksibilitas 
#include <algorithm> // untuk fungsi sort dan find

using namespace std;

// Struktur data untuk menapung data mahasiswa 
struct mahasiswa {
	string nama[10];
	string npm[10];
	float nilai_akhir;
};

// fungsi untuk menampilkan data mahasiswa 
voit tampilMahasiswa(const Mahasiswa& m) {
	cout << "Nama: " << m.nama << endl;
	cout << "Npm: " << m.npm << endl;
	cout << "Nilai Akhir: " << m.nilai_akhir << endl;
	cout << "------------------------------" << endl:
}

// fungsi untuk mencari mahasiswa bedasarkan Npm
Mahasiswa* cariMahasiswa(vector<Mahasiswa)& data, const string& npm) {
	auto it = find_if(data.begin(), data.end() [&](const Mahasiswa m) {
		return m.npm == npm;
	});
	if (it == data.end()) {
		return nullptr; // Mahasiswa tidak ditemukan 
	} else {
		return &(*it); // Mengembalikan pointer ke mahsisawa yang ditemukan 
	}
}

int main () {
	// deklarasikan vector untuk menampung data mahasiswa 
	vector<Mahasiswa> dataMahasiswa;
	
	// menu program 
	int pilihan;
	do {
		cout << "\nMenu Program Pengolahan Data Mahasiswa:\n";
		cout << "1. Tambah Data Mahasiswa\n";
		cout << "2. Tampilkan Data Mahasiswa\n";
		cout << "3. Cari Data Mahasiswa\n";
		cout << "4. Keluar\n";
		cout << " Masukkan Pilihan: ";
		cin >> pilihan 
		
		switch (pilihan) {
			case 1:
			// Menambahkan Data mahasiswa Baru 
			Mahasiswa mhsBaru;
			cout << "Masukan Data Mahasiswa Baru:\n";
			cout << "Nama: ";
			cin.ignore(); // Mengabaikan sisa input baris sebelumnya 
			getline(cin, mhsBaru.nama); 
			cout << "Npm: ";
			getline(cin, mhsBaru.npm);
			cout << "Nilai Akhir:  ";
			cin >> mhs.nilai_akhir;
			dataMahasiswa.push_back(mhsBaru);
			cout << "Data mahasiswa baru berhasil ditambahkan!" << endl;
			break;
			
			case 2:
				// menampilkan data semua mahasisawa
				if (dataMahasiawa.empty()) {
					cout << "Data Mahasiswa Masih Kosong!" << endl;
				} else {
					cout << "\nData Mahasiswa: \n";
					for (conts Mahasiswa& m : dataMahasiswa) {
						tampilMahasiswa(m);
					}
				}
				break;
				
			case 3:
				// mencari data mahasiswa berdasarkan npm 
				string npmTarget;
				cout << "Masukan Npm yang ingin dicari: ";
				cin >> nimTarget:
				    
				
				Mahasiswa* mhsDitemukan = cariMahasiswa(dataMahasiswa, npmTarget);
				if (mhsDitemukan) {
				    out << "\nData Mahasiswa Ditemukan: \n";
				    tampilMahasiswa(*mhsditemukan);
					} else {
					cout << "Mahasiswa dengan Npm tersebut tidak ditemukan!" << endl;
					}
					break;
					
			case 4:
				// keluar dari program 
				cout << "keluar dari program..." << endl;
				break;
						
				default:
				cout << "pilihan tidak valid!" << endl;
		}
	} while (pilihan != 4);
	
	return 0; 
}








