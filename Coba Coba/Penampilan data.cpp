 //  code menampikan nilai 
 
 #include <iostream>
 #include <conio.h>
 
 using namespace std;
 
 int main () {
 	
 	char nama_mahasiswa[50], matkul[50], grade;
 	int tugas, uts, uas, nTugas, nUts, nUas, jumlah;\
 	
 	cout << "|==========================================" << endl;
 	cout << "|          Daftar Nilai Mahasiswa          " << endl;
 	cout << "|==========================================" << endl;
 	cout << endl;
 	
 	// proses input nilai 
 	cout << "Masukan Nama_mahasiswa : ";
 	gets (nama_mahasiswa);
	cout << "Masukan Matkul : ";
	gets (matkul);
	cout << "Masukan Nilai Tugas : ";
	cin >> tugas;
	cout << "Masukan Nilai Uts : ";
	cin >> uts;
	cout << "Masukann Niai Uas : ";
	cin >> uas;
	
	// proses perhitungan 
	nTugas = tugas*20/100;
	nUts = uts*30/100;
	nUas = uas*40/100;
	
	jumlah = nTugas + nUts + nUas;
	
	if (jumlah >= 80 ) {
		grade = 'A';
	}
	else if (jumlah >= 75 ) {
		grade = 'B';
	}	
	else if (jumlah >= 65 ) {
		grade = 'C';
	}	
	else if (jumlah >= 50 ) {
		grade = 'd';
	}	
	else {
		grade = 'E';
	}	
	cout << endl;
	
	// proses output 
	cout << "==========================================" << endl;
	cout << "Nama Mahasiswa : " << " " << nama_mahasiswa;
	cout << endl;
	cout << "Mata Kuliah : " << " " << matkul;
	cout << endl;
	cout << "Jumlah Nilai : " << " " << jumlah;
	cout << endl;
	cout << "===========================================" << endl;
	cout << "Selamat Anda Mendapatkan Nilai Grade " << grade << endl;
	cout << "===========================================" << endl;
	cout << endl;
	
return 0;		
 }
