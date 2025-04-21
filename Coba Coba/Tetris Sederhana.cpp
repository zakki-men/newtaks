#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// Ukuran papan permainan
const int BOARD_WIDTH = 10;
const int BOARD_HEIGHT = 20;

// Bentuk Tetromino (Blok)
const vector<vector<char>> TETROMINOES {
  {{'O', 'O'},
   {'O', 'O'}}, // O
  {{'I', 'I', 'I', 'I'},
   {0, 0, 0, 0}}, // I
  {{'T', 'T', 'T'},
   {0, 'T', 0}}, // T
  {{'L', 'L', 0},
   {0, 'L', 0}}, // L
  {{0, 'L', 'L'},
   {'L', 0, 0}}, // L (mirror)
  {{'J', 'J', 0},
   {0, 'J', 'J'}}, // J
  {{0, 'J', 'J'},
   {'J', 0, 0}}  // J (mirror)
};

// Struktur papan permainan
vector<vector<char>> board(BOARD_HEIGHT, vector<char>(BOARD_WIDTH, '.'));

// Variabel untuk skor dan level game
int score = 0;
int level = 1;

// Fungsi untuk menampilkan papan permainan
void printBoard() {
  cout << "Score: " << score << " Level: " << level << endl;
  for (int i = 0; i < BOARD_HEIGHT; i++) {
    for (int j = 0; j < BOARD_WIDTH; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

// Fungsi untuk mengecek apakah blok bisa bergerak ke bawah
bool isCollision(int x, int y, const vector<vector<char>>& piece) {
  for (int i = 0; i < piece.size(); i++) {
    for (int j = 0; j < piece[i].size(); j++) {
      if (piece[i][j] != 0 && y + i >= BOARD_HEIGHT ||
          piece[i][j] != 0 && board[y + i][x + j] != '.') {
        return true;
      }
    }
  }
  return false;
}

// Fungsi untuk memindahkan blok ke bawah
void moveDown(vector<vector<char>>& piece, int& y) {
  if (!isCollision(piece[0][0], y + 1, piece)) {
    y++;
  }
}

// Fungsi untuk memutar blok (sederhana, hanya 90 derajat)
void rotate(vector<vector<char>>& piece) {
  vector<vector<char>> temp = piece;
  for (int i = 0; i < piece.size(); i++) {
    for (int j = 0; j < piece[i].size(); j++) {
      piece[j][i] = temp[i][piece[i].size() - 1 - j];
    }
  }
}

// Fungsi untuk menghapus baris yang penuh dan menjatuhkan baris di atasnya
void clearFullLines() {
  int linesCleared = 0;
  for (int y = BOARD_HEIGHT - 1; y >= 0; y--) {
    bool isFullLine = true;
    for (int x = 0; x < BOARD_WIDTH; x++) {
      if (board[y][x] == '.') {
        isFullLine = false;
        break;
      }
    }

    if (isFullLine) {
      for (int i = y; i > 0; i--) {
        board[i] = board[i - 1];
      }
      board[0].fill('.');
      linesCleared++;
    }
  }

  if (linesCleared > 0) {
    score += linesCleared * level;
    if (score >= level * 100) {
      level++;
    }
  }
}

// Fungsi utama (game loop)
int main() {
  srand(time(0)); // Inisialisasi seed untuk pemilihan blok acak

  int currentPiece = rand() % TETROMINOES

