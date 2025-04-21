#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;
using namespace sf;

// Ukuran window game
const int windowWidth = 800;
const int windowHeight = 600;

// Kecepatan dinosaurus
const float dinoSpeed = 200.0f;

// Posisi awal dinosaurus
int dinoX = 100;
int dinoY = windowHeight - 100;
float dinoVelocityY = 0.0f;
const float gravity = 800.0f;
bool isJumping = false;
const float jumpHeight = -400.0f; // Negative value for upward jump

// Posisi awal kaktus
int cactusX = windowWidth; // Start off-screen
int cactusY = windowHeight - 100;

// Kecepatan kaktus
const float cactusSpeed = 100.0f;

// Skor game
int score = 0;

// Fungsi utama
int main() {
    // Buat window game
    RenderWindow window(VideoMode(windowWidth, windowHeight), "Game Dinosaurus");
    window.setFramerateLimit(60); // Important for consistent physics

    // Muat sprite dinosaurus
    Texture dinoTexture;
    if (!dinoTexture.loadFromFile("dinosaur.png")) {
        return EXIT_FAILURE; // Handle loading errors
    }
    Sprite dinoSprite(dinoTexture);
    dinoSprite.setPosition(dinoX, dinoY);

    // Muat sprite kaktus
    Texture cactusTexture;
    if (!cactusTexture.loadFromFile("cactus.png")) {
        return EXIT_FAILURE;
    }
    Sprite cactusSprite(cactusTexture);
    cactusSprite.setPosition(cactusX, cactusY);

    // Muat suara loncatan
    SoundBuffer jumpSoundBuffer;
    if (!jumpSoundBuffer.loadFromFile("jump.wav")) { // Make sure you have a jump.wav file
        return EXIT_FAILURE;
    }
    Sound jumpSound(jumpSoundBuffer);

    Clock clock;

    // Game loop
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
            if (event.type == Event::KeyPressed) {
                if (event.key.code == Keyboard::Space && !isJumping) {
                    isJumping = true;
                    dinoVelocityY = jumpHeight;
                    jumpSound.play();
                }
            }
        }

        float deltaTime = clock.restart().asSeconds();

        // Dino jump logic
        if (isJumping) {
            dinoVelocityY += gravity * deltaTime;
            dinoY += dinoVelocityY * deltaTime;

            if (dinoY >= windowHeight - 100) {
                dinoY = windowHeight - 100;
                isJumping = false;
                dinoVelocityY = 0.0f;
            }
        }

        dinoSprite.setPosition(dinoX, dinoY);

        // Kaktus movement
        cactusX -= cactusSpeed * deltaTime;
        cactusSprite.setPosition(cactusX, cactusY);

        if (cactusX < -50) { // Reset cactus position when it goes off-screen
            cactusX = windowWidth;
        }

        // Clear window
        window.clear(Color::White);

        // Draw sprites
        window.draw(dinoSprite);
        window.draw(cactusSprite);

        // Display window
        window.display();
    }

    return 0;
}
