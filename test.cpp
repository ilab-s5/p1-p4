#include <stdio.h>
#define size 99

void sort(int[], int);

int main(){
	int jenis_koin[size], i, uang, banyak_jenis_koin, hasil[size], jumlah;
	jumlah = 0;
	printf("Muhammad Sahal Nurdin\n");
	printf("\nBanyak jenis koin: ");
	scanf("%d", &banyak_jenis_koin);
	
	printf("\nMasukkan jenis koin: \n");
	for(i = 0; i < banyak_jenis_koin; i++){
		scanf("\n %d", &jenis_koin[i]);
	}
	sort(jenis_koin, banyak_jenis_koin);
	printf("\n Koin yang tersedia: \n");
	for(i = 0; i < banyak_jenis_koin; i++){
		printf("%d", jenis_koin[i]);
		printf("\n");
	}
	
	printf("Masukkan nilai yang dipecah: ");
	scanf("%d", &uang);
	printf("\n");
	
	for(i = 0; i < banyak_jenis_koin; i++){
		hasil[i] = uang / jenis_koin[i];
		uang = uang % jenis_koin[i];
	}
	
	for(i = 0 ; i < banyak_jenis_koin; i++){
		printf("\nkeping %d", jenis_koin[i]);
		printf("-an ada sebanyak: %d ", hasil[i]);
		jumlah = jumlah + hasil[i];
		printf("\n");
	}
	
	printf("\nSisanya adalah", uang);
	printf("\n");
	printf("Jumlah koin minimum adalah%d\n", jumlah);
	return 0;
}

void sort(int array[], int siz){
	int i, hold, j;
	for(i = 0; i < siz; i++){
		for(j = 0; j < siz -1; j++){
			if(array[j] < array[j+1]){
				hold = array[j];
				array[j] =  array[j + 1];
				array[j+1] = hold;
			}
		}
	}
}
