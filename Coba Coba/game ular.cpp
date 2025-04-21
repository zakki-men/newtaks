#include <iostream> // preprocesseor directive
#include <conio.h> // Untuk getch() di Windows
#include <unistd.h> // Untuk sleep() di UNIX/Linux

using namespace std;
int main()


// Ukuran bidang permainan
const int width = 20;
const int height = 20;

// Koordinat ular dan makanan
int x, y, fruitX, fruitY;
int tailX[100], tailY[100];
int nTail; // Panjang ular

// Status permainan
bool gameOver;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

// Inisialisasi
void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand () % width;
    fruitY = rand () % height;
    nTail = 0;
}

// Tampilan bidang permainan
void Draw() {
    system("clear"); // Hapus layar (untuk UNIX/Linux)
    //system("cls"); // Hapus layar (untuk Windows)
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#";
            if (i == y && j == x)
                cout << "O"; // Ular
            else if (i == fruitY && j == fruitX)
                cout << "F"; // Makanan
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o"; // Ekor ular
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    cout << "Score:" << nTail << endl;
}

// Input dari pengguna
void Input() {
    if (_kbhit()) { // Jika ada input dari keyboard
        switch (_getch()) {
            case 'a':
                if (dir != RIGHT) // Tidak bisa langsung berbalik
                    dir = LEFT;
                break;
            case 'd':
                if (dir != LEFT)
                    dir = RIGHT;
                break;
            case 'w':
                if (dir != DOWN)
                    dir = UP;
                break;
            case 's':
                if (dir != UP)
                    dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}

// Logika permainan
void Logic() {
    int pre
}
