#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << "Hasil penjumlahan: " << num1 + num2;
            break;
        case '-':
            cout << "Hasil pengurangan: " << num1 - num2;
            break;
        case '*':
            cout << "Hasil perkalian: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Hasil pembagian: " << num1 / num2;
            else
                cout << "Error! Pembagian dengan nol tidak diperbolehkan.";
            break;
        default:
            cout << "Error! Operator yang dimasukkan tidak valid.";
            break;
    }
    
    return 0;
}

