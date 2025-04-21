#include <iostream>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    while (true) {
        // Mengambil waktu saat ini
        auto now = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(now);

        // Konversi waktu ke struktur tm
        struct tm *localTime = localtime(&currentTime);

        // Menampilkan waktu dalam format jam:menit:detik
        cout << "Waktu: ";
        cout << setw(2) << setfill('0') << localTime->tm_hour << ":";
        cout << setw(2) << setfill('0') << localTime->tm_min << ":";
        cout << setw(2) << setfill('0') << localTime->tm_sec << endl;

        // Menunggu 1 detik sebelum menampilkan waktu berikutnya
        this_thread::sleep_for(chrono::seconds(1));
    }
    
    return 0;
}

