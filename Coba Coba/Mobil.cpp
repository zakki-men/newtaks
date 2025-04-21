#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

// Ukuran mobil
const int carWidth = 50;
const int carHeight = 30;

// Posisi awal mobil
int carX = 300;
int carY = 400;

// Kecepatan mobil
int speed = 5;

// Fungsi utama
int main() {
  // Buat window game
  RenderWindow window(VideoMode(800, 600), "Game Mobil Balap");

  // Buat sprite mobil
  Texture carTexture;
  carTexture.loadFromFile("car.png");
  Sprite carSprite(carTexture);
  carSprite.setPosition(carX, carY);

  // Loop game utama
  while (window.isOpen()) {
    // Menangani event input
    Event event;
    while (window.pollEvent(event)) {
      if (event.type == Event::Closed) {
        window.close();
      } else if (event.type == Event::KeyPressed) {
        if (event.key.code == Keyboard::Left) {
          carX -= speed;
        } else if (event.key.code == Keyboard::Right) {
          carX += speed;
        }
      }
    }

    // Batasi pergerakan mobil di dalam window game
    carX = max(0, min(carX, window.getSize().x - carWidth));

    // Bersihkan window game
    window.clear();

    // Gambar mobil
    window.draw(
