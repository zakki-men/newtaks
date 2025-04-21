#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <iomanip>

using namespace std;

class Account {
public:
    string accountNumber;
    string pin;
    double balance;

    Account(string accNum, string pinCode, double initialBalance) {
        accountNumber = accNum;
        pin = pinCode;
        balance = initialBalance;
    }

    void displayAccountInfo() {
        cout << "Nomor Rekening: " << accountNumber << endl;
        cout << "Saldo: " << fixed << setprecision(2) << balance << endl;
    }
};

class ATM {
private:
    map<string, Account> accounts;
    Account* currentAccount;

public:
    ATM() {
        loadAccounts();
        currentAccount = nullptr;
    }

    ~ATM() {
        saveAccounts();
    }

    void loadAccounts() {
        ifstream file("accounts.txt");
        if (file.is_open()) {
            string accNum, pinCode;
            double balance;
            while (file >> accNum >> pinCode >> balance) {
                accounts[accNum] = Account(accNum, pinCode, balance);
            }
            file.close();
        }
    }

    void saveAccounts() {
        ofstream file("accounts.txt");
        if (file.is_open()) {
            for (const auto& pair : accounts) {
                file << pair.second.accountNumber << " "
                     << pair.second.pin << " "
                     << pair.second.balance << endl;
            }
            file.close();
        }
    }

    void login() {
        string accNum, pinCode;
        cout << "Masukkan Nomor Rekening: ";
        cin >> accNum;
        cout << "Masukkan PIN: ";
        cin >> pinCode;

        if (accounts.find(accNum) != accounts.end() && accounts[accNum].pin == pinCode) {
            currentAccount = &accounts[accNum];
            cout << "Login berhasil!\n";
        } else {
            cout << "Nomor rekening atau PIN salah!\n";
        }
    }

    void checkBalance() {
        if (currentAccount) {
            currentAccount->displayAccountInfo();
        } else {
            cout << "Silakan login terlebih dahulu.\n";
        }
    }

    void deposit() {
        if (currentAccount) {
            double amount;
            cout << "Masukkan jumlah yang ingin disetor: ";
            cin >> amount;
            if (amount > 0) {
                currentAccount->balance += amount;
                cout << "Setoran berhasil! Saldo baru: " << fixed << setprecision(2) << currentAccount->balance << endl;
            } else {
                cout << "Jumlah setoran tidak valid.\n";
            }
        } else {
            cout << "Silakan login terlebih dahulu.\n";
        }
    }

    void withdraw() {
        if (currentAccount) {
            double amount;
            cout << "Masukkan jumlah yang ingin ditarik: ";
            cin >> amount;
            if (amount > 0 && amount <= currentAccount->balance) {
                currentAccount->balance -= amount;
                cout << "Penarikan berhasil! Saldo baru: " << fixed << setprecision(2) << currentAccount->balance << endl;
            } else {
                cout << "Jumlah penarikan tidak valid atau saldo tidak cukup.\n";
            }
        } else {
            cout << "Silakan login terlebih dahulu.\n";
        }
    }

    void logout() {
        currentAccount = nullptr;
        cout << "Anda telah logout.\n";
    }

    void createAccount() {
        string accNum, pinCode;
        double initialBalance;

        cout << "Masukkan Nomor Rekening Baru: ";
        cin >> accNum;
        cout << "Masukkan PIN Baru: ";
        cin >> pinCode;
        cout << "Masukkan Saldo Awal: ";
        cin >> initialBalance;

        if (accounts.find(accNum) == accounts.end() && initialBalance >= 0) {
            accounts[accNum] = Account(accNum, pinCode, initialBalance);
            cout << "Akun berhasil dibuat!\n";
        } else {
            cout << "Nomor rekening sudah ada atau saldo awal tidak valid.\n";
        }
    }

    void deleteAccount() {
        if (currentAccount) {
            accounts.erase(currentAccount->accountNumber);
            cout << "Akun berhasil dihapus.\n";
            logout();
        } else {
            cout << "Silakan login terlebih dahulu.\n";
        }
    }

    void displayAllAccounts() {
        cout << "\n=== Da ftar Semua Akun ===\n";
        for (const auto& pair : accounts) {
            pair.second.displayAccountInfo();
            cout << "------------------------\n";
        }
    }

    void transfer() {
        if (currentAccount) {
            string targetAccNum;
            double amount;
            cout << "Masukkan Nomor Rekening Tujuan: ";
            cin >> targetAccNum;
            cout << "Masukkan Jumlah yang ingin ditransfer: ";
            cin >> amount;

            if (accounts.find(targetAccNum) != accounts.end() && amount > 0 && amount <= currentAccount->balance) {
                currentAccount->balance -= amount;
                accounts[targetAccNum].balance += amount;
                cout << "Transfer berhasil! Saldo baru Anda: " << fixed << setprecision(2) << currentAccount->balance << endl;
            } else {
                cout << "Transfer gagal. Pastikan nomor rekening tujuan valid dan saldo cukup.\n";
            }
        } else {
            cout << "Silakan login terlebih dahulu.\n";
        }
    }
};

int main() {
    ATM atm;
    int choice;

    do {
        cout << "\n=== Menu ATM ===\n";
        cout << "1. Login\n";
        cout << "2. Cek Saldo\n";
        cout << "3. Setor Uang\n";
        cout << "4. Tarik Uang\n";
        cout << "5. Logout\n";
        cout << "6. Buat Akun Baru\n";
        cout << "7. Hapus Akun\n";
        cout << "8. Tampilkan Semua Akun\n";
        cout << "9. Transfer Uang\n";
        cout << "10. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.login();
                break;
            case 2:
                atm.checkBalance();
                break;
            case 3:
                atm.deposit();
                break;
            case 4:
                atm.withdraw();
                break;
            case 5:
                atm.logout();
                break;
            case 6:
                atm.createAccount();
                break;
            case 7:
                atm.deleteAccount();
                break;
            case 8:
                atm.displayAllAccounts();
                break;
            case 9:
                atm.transfer();
                break;
            case 10:
                cout << "Terima kasih! Sampai jumpa.\n";
                break;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != 10);

    return 0;
}
