#include <iostream>

using namespace std;

// Deklarasi struct buku
struct Buku {
  string kodeBuku;
  string namaBuku;
  int tahunTerbit;
  string pengarang;
  float harga;
};

// Fungsi untuk membaca data buku
void bacaDataBuku(Buku dataBuku[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "Data Buku ke-" << i + 1 << endl;
    cout << "Kode Buku: ";
    cin >> dataBuku[i].kodeBuku;
    cout << "Nama Buku: ";
    cin.ignore(); // Mengabaikan newline character
    getline(cin, dataBuku[i].namaBuku);
    cout << "Tahun Terbit: ";
    cin >> dataBuku[i].tahunTerbit;
    cout << "Pengarang: ";
    cin.ignore();
    getline(cin, dataBuku[i].pengarang);
    cout << "Harga: ";
    cin >> dataBuku[i].harga;
    cout << endl;
  }
}

// Fungsi untuk mencetak data buku
void cetakDataBuku(Buku dataBuku[], int n) {
  cout << "\nDaftar Buku" << endl;
  for (int i = 0; i < n; i++) {
    cout << "=====================" << endl;
    cout << "Kode Buku: " << dataBuku[i].kodeBuku << endl;
    cout << "Nama Buku: " << dataBuku[i].namaBuku << endl;
    cout << "Tahun Terbit: " << dataBuku[i].tahunTerbit << endl;
    cout << "Pengarang: " << dataBuku[i].pengarang << endl;
    cout << "Harga: Rp" << dataBuku[i].harga << endl;
  }
}

int main() {
  // Deklarasi dan inisialisasi array of struct
  Buku dataBuku[100];
  int n;

  // Menentukan jumlah data buku yang akan dimasukkan
  cout << "Masukkan jumlah data buku: ";
  cin >> n;

  // Membaca data buku
  bacaDataBuku(dataBuku, n);

  // Mencetak data buku
  cetakDataBuku(dataBuku, n);

  return 0;
}
