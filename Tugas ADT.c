#include <stdio.h>
#include <stdlib.h>

typedef struct biodata_pendaftar{
	char nama[100];
	char asal_kota[100];
	char umur[100];
} data;

int main(){
	data orang[100];
	int jumlah,i;
	
	printf("======================== Database Pendaftar Ledeh Corp ========================\n");
	printf("\nBerapa orang yang mendaftar? : ");
	scanf("%d",&jumlah);
	system("cls");
	for (i=1;i<=jumlah;i++){
		printf("======================== Database Pendaftar Ledeh Corp ========================\n");
		printf("\nMasukkan data orang ke-%d",i);
		printf("\n\nNama : ");
		scanf(" %[^\n]%*c",&orang[i].nama);
		printf("\nAsal kota : ");
		scanf(" %[^\n]%*c",&orang[i].asal_kota);
		printf("\nUmur : ");
		scanf(" %[^\n]%*c",&orang[i].umur);
		system("cls");
	}
	printf ("\t\t\t\t\t~Berikut data yang telah diinput~\n\n");
	for (i=1;i<=jumlah;i++){
		printf("\t\t||Pendaftar ke-%d||\n\n",i);
		printf("Nama\t\t: %s\n",orang[i].nama);
		printf("Asal Kota\t: %s\n",orang[i].asal_kota);
		printf("Umur\t\t: %s",orang[i].umur);
		printf("\n\n\n");
	}
	return 0;
}
