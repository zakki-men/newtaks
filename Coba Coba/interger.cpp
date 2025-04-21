#include <iostream>
using namespace std;

// Membuat alias 'Integer' untuk tipe data 'int'
typedef int Integer;

// Membuat alias 'Poin' untuk struct 'Point'
typedef struct {
    int x;
    int y;
} Point;

int main() {
    Integer a = 10;  // 'Integer' digunakan sebagai alias untuk 'int'
    Point p;         // 'Point' digunakan sebagai alias untuk struct

    p.x = 5;
    p.y = 10;

    cout << "Nilai a: " << a << endl;
    cout << "Titik p: (" << p.x << ", " << p.y << ")" << endl;

    return 0;
}

