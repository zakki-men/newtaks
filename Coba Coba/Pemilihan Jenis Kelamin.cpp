# include <iostream> 

using namespace std;

int main () {
	int jenis_kelamin;
	float berat_badan, tinggi_badan, rumus_bmi, rumus_broca, meter;
	
	// proses input data user
	cout << "|=============================|" << endl;
	cout << "|== Pilh jenis Kelamin Anda ==|" << endl;
	cout << "|=============================|" << endl; 
	cout << "|==  1. Laki-laki           ==|" << endl;
	cout << "|==  2. Perempuan           ==|" << endl;
	cout << "|=============================|" << endl;
	cout << endl;
	
	cout << "Masukkan pilihan anda : ";
	cin >> jenis_kelamin;
	cout << "Masukkan Berat Badan Anda : ";
	cin >> berat_badan;
	cout << "Masukan Tinggi Badan Anda : ";
	cin >> tinggi_badan;
	cout << endl;
	
	  // proses pehitungan rumus BMI
	  meter = tinggi_badan / 100;
	  rumus_bmi = (berat_badan / (meter * 100));
	  
	  // proses perulangan untuk menampilkan hasil 
	  cout << "hasil Berat Badan Anda Dari Rumus Bmi" << endl;
	  if (rumus_bmi < 18.5) {
	  	cout << "Kekurangan Berat Badan (Kurus)" << endl;
	  } 
	  else if (rumus_bmi <= 24.5) {
	  	cout << "Normal (Ideal)" << endl;
	  }
	  else if (rumus_bmi < 29.9) {
	  	cout << "Kelebihan Berat Badan" << endl;
	  }
	  else {
	  	cout << "Obesitas" << endl;
	  }
	  cout << " BMI = " << rumus_bmi << endl << endl;
	  
	  // proses perhitungan rumus BROCA
	  switch(jenis_kelamin) 
	  {
	  	case 1:
	  		// untuk cowok 
	  		rumus_broca = ((tinggi_badan - 100) - (0.10 * (tinggi_badan - 100)));
	  		break;
	  	case 2:
	  		// untuk cewek 
	  		rumus_broca = ((tinggi_badan - 100) - (0.15 * (tinggi_badan - 100)));
	  		break;
	  	defaul: 
	  	    rumus_broca = 0; 
	  }
	  if (jenis_kelamin == 1 or jenis_kelamin == 2) 
	  {
	       int hasil = (int) rumus_broca;
		   cout << "Hasil Berat Badan Anda Dari Rumus BROCE" << endl;
		   cout << "Broca =" << hasil << " Kg " << endl;
 	    }
 	    
return 0;
}
 	    

