#include <iostream>
#include <string>

using namespace std;

struct Identitas {
	string nama;
	string tanggal_lahir;
	string jenis_kelamin;
	string alamat;
	string nomor_telepon;
	string email;
};

int main() {
	Identitas data_diri;
	
	data_diri.nama = "Zakki";
	data_diri.tanggal_lahir = "00-Desember-2000";
	data_diri.jenis_kelamin = "Laki - Laki";
	data_diri.alamat  = "Simpang Rimbo";
	data_diri.nomor_telepon = "+6212345678";
	data_diri.email = "zakki@gmail.com";
	
	cout << "Nama: " << data_diri.nama << endl;
	cout << "Tanggal Lahir: " << data_diri.tanggal_lahir << endl;
	cout << "Jenis Kelamin: " << data_diri.jenis_kelamin << endl;
	cout << "Alamat: " << data_diri.alamat << endl;
	cout << "Email: " << data_diri.email << endl;
	
	return 0;
}
