#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

// Mendefinisikan struktur untuk produk
struct Product {
    string name;
    int quantity;
    double price;
};

// Fungsi untuk menambahkan produk baru ke dalam daftar produk
void addProduct(vector<Product> &inventory) {
    Product newProduct;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan buffer
    cout << "Masukkan nama produk: ";
    getline(cin, newProduct.name);
    cout << "Masukkan harga produk: ";
    while (!(cin >> newProduct.price) || newProduct.price <= 0) {
        cout << "Harga harus bilangan riil positif. Silakan coba lagi: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Masukkan jumlah produk yang tersedia: ";
    while (!(cin >> newProduct.quantity) || newProduct.quantity <= 0) {
        cout << "Jumlah harus bilangan bulat positif. Silakan coba lagi: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    inventory.push_back(newProduct);
    cout << "Produk berhasil ditambahkan!" << endl;
}

// Fungsi untuk menampilkan daftar produk
void displayInventory(const vector<Product> &inventory) {
    cout << "\nDaftar Produk:" << endl;
    cout << "-------------------------" << endl;
    for (const auto & product : inventory) {
        cout << "Nama: " << product.name << ", Harga: " << product.price << ", Jumlah: " << product.quantity << endl;
    }
    cout << "-------------------------" << endl;
}

// Fungsi utama
int main() {
    vector<Product> inventory;
    int choice;

    do {
        // Tampilkan menu
        cout << "\nMenu:\n";
        cout << "1. Tambah Produk\n";
        cout << "2. Tampilkan Produk\n";
        cout << "3. Keluar\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct(inventory);
                break;
            case 2:
                displayInventory(inventory);
                break;
            case 3:
                cout << "Terima kasih! Sampai jumpa lagi." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih kembali." << endl;
        }
    } while (choice != 3);

    return 0;
}

