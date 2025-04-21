#include <iostream>
#include <iomanip>
 
using namespace std;

struct Mahasiswa {
	string Nama;
	string Npm;
	string Kelas;
	string TempatTinggal;
	// tambahkan atribut lin sesuai kebutuhan  
};

int main () {
	// deklarasi array of struct
	Mahasiswa mahasiswa [100]; // maksimal 100 data mahasiswa 
	
	// jumlah data mahasiwa yang sebenarnya 
	int jumlahMahasiswa;
	
	// input data mahasiswa 
	cout << "Masukan jumlah data mahasiswa: ";
	cin >> jumlahMahasiswa;
	
	for (int i= 0; i < jumlahMahsiswa; i++) {
		cout << "\nData mahasiswa ke-" << i + i << endl;
		cout << "Nama: ";
		cin.ignore(); // mengabaikan newline character 
		getline(cin, mahasiswa[i].Name);
		cout << "Npm: ";
		getline(cin, mahasiswa[i].Npm);
		cout << "Kelas: ";
		getline(cin, mahasiswa[i].Kelas);
		cout << "Tempat Tinggal: ";
		getline(cin, mahasiswa[i].TempatTinggal)
		// input data lain sesuai kebutuhan 
	}
	
	// menampilkan tabel data mahasiswa 
	cout << "\n\========================================    Tebel Data Mahasiswa     =============================================\n";
	cout << "| NO   | Nama                  | Npm                | Kelas            | Tempat Tinggal         |" << endl;
    cout << "|------|-----------------------|--------------------|------------------|------------------------|" << endl;
    
    for (int i = 0; i < jumlahMahasiswa; i ++) {
    	cout << " | " << setw(3) << i + 1 << " | " setw(15) << mahasiswa[i].Nama << " | "
    	     << setw (12) << mahasiwa[i].Npm << " | " << setw(6) << mahasiswa[i].Kelas << " | "
			 << setw (15) << mahsiswa[i].TempatTinggal << " |\n";
	}
	
	cout << "========================================================================\n";
	
	return 0;
    
    
    
    
    
}

