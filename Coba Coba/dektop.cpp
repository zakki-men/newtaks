#include <iostream>
#include <vector>
#include <algorithm>

// Fungsi utama
int main() {
  // Simulasi data tugas
  vector<Task> tasks = {
    {1, "Belajar C++", "Mempelajari dasar-dasar C++", false},
    {2, "Menyelesaikan Tugas", "Menyelesaikan tugas pemrograman", true},
    {3, "Membaca Buku", "Membaca buku tentang algoritma", false}
  };

  // Menampilkan daftar tugas
  for (const Task& task : tasks) {
    cout << task.id << " - " << task.title << " - " << task.description << " - " << (task.completed ? "Selesai" : "Belum Selesai") << endl;
  }

  // Menandai tugas sebagai selesai
  int taskID = 1;
  auto it = find_if(tasks.begin(), tasks.end(), [taskID](const Task& task) {
    return task.id == taskID;
  });

  if (it != tasks.end()) {
    it->completed = true;
    cout << "Tugas " << it->title << " ditandai sebagai selesai." << endl;
  } else {
    cout << "Tugas dengan ID " << taskID << " tidak ditemukan." << endl;
  }

  return 0;
}

