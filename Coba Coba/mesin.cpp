#include <iostream>
#include <vector>
#include <algorithm>

// Fungsi utama
int main() {
  // Simulasi data latihan
  vector<DataPoint> data = {
    {1, 2, 3, 1}, // Data titik dengan label 1
    {4, 5, 6, 0}, // Data titik dengan label 0
    {7, 8, 9, 2}, // Data titik dengan label 2
  };

  // Melatih model machine learning (misalnya menggunakan TensorFlow)
  // ...

  // Memprediksi label untuk data baru
  float x1 = 10, x2 = 11, x3 = 12;
  int predictedLabel = model->predict({x1, x2, x3});


