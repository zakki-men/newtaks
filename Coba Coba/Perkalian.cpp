// kalkulator sederhana bhs c 
#include <iostream>
#include <stdio.h>

int main (void) {
	
	printf("|============================================| \n");
	printf("|==== Program Kalkulator Sederhana Bhs c ====| \n");
	printf("|============================================| \n");
	
	int bil1, bil2, pilihan, hasi1;
	float hasil_bagi;
	
	printf("     Menu Pilihan : 1 - 4     \n");
	printf("------------------------------\n");
	printf("         1. Penjumlahan       \n");
	printf("         2. Pengurangan       \n");
	printf("         3. Perkalian         \n");
	printf("         4. Pembagian         \n");
	printf("------------------------------\n");
	printf(" Input Nomor pilihan Anda : ");
	scanf("%i", &pilihan);
	
	switch (pilihan) {
		
	case 1:
		printf("\n 1. Penjumlahan \n");
		printf("-----------------------------\n");
		printf(" Input Bilangan Pertama : ");
		scanf("%i", &bil1);
		printf(" Input Bilangan Kedua   : ");
		scanf("%i", &bil2);
		hasil_bagi = bil1 + bil2;
		printf("\n");
		printf(" Hasil dari %i + %i = %i \n", bil1, bil2, hasil1);
		break;
	case 2: 
		printf("\n 2. Pengurangan \n");
		printf("-----------------------------\n");
		printf(" Input Bilangan Pertama : ");
		scanf("%i", &bil1);
		printf(" Input Bilangan Kedua   : ");
		scanf("%i", &bil2);
		hasil = bil1 - bil2;
		printf("\n");
		printf("hasil dari %i - %i = %i \n", bil1, bil2, hasil1);
		break;
	case 3:
		printf("\n 3. perkalian \n");
		printf("-----------------------------\n");
		printf(" Input Bilangan Pertama : ");
		scanf("%i", &bil1);
		printf(" Input Bilangan Kedua   : ");
		scanf("%i", &bil2);
		hasil = bil1 * bil2;
		printf("\n");
		printf("hasil dari %i * %i = %i \n", bil1, bil2, hasil1);
		break;
	case 4:
		printf("\n 4. Pembagian \n");
		printf("-----------------------------\n");
		printf(" Input Bilangan Pertama : ");
		scanf("%i", &bil1);
		printf(" Input Bilangan Kedua   : ");
		scanf("%i", &bil2);
		hasil = bil1 / bil2;
		hasil_bagi = bil1 % bil2;
		printf("\n");
		printf("hasil dari %i / %i = %i \n", bil1, bil2, hasil1);
		printf("Modulus %.2f \n", hasil_bagi);
		break;
	defaual:
		printf("\n Pilihan Menu yang anda masukan salah \n");
	}
	
	return 0;
}
