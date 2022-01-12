#include<iostream>
#include<stdlib.h>
using namespace std ;
/*
Mata Kuliah : Dasar Pemrograman
tugas       :UAS
Nama        :Fazri Albar Permana
Kelas       :1B
Tanggal     :06 Januari 2022

 
 

*/
void dh(){
	kembali:
		system ("cls");
	cout << "======================================\n";
	cout << "=============DAFTAR HARGA=============\n";
	string nm [9]={"Xiaomi     \t:", "Samsung    \t:", "Mito     \t:", "Asus    \t:", "Oppo    \t:", "Iphone     \t:", "Lenovo     \t:","Realme    \t:","Vivo    \t:"};
	string nama [9]={"Xiaomi          \t:", "Samsung    \t:", "Mito            \t:", "Asus      \t:", "Oppo       \t:", "Iphone          \t:", "Lenovo      \t:","Realme        \t:","Vivo      \t:"};
	int harga [9]={400000,500000,500000,600000,500000,700000,500000,600000,500000}; 
	int pilih;
		for (int a = 0 ; a < 9; a++){
		cout << nm [a]  ;
		cout << harga [a];
		
		cout << endl;	
}
		
		cout << "===================================\n";
		cout << "===================================\n";
		
	int byr[9];
	
	int jmlh [9];
	int tot;
	
	
	
		for (int a = 0 ; a < 9; a++){
		cout <<"berapa " << nama [a] ;
	
		cin >> jmlh [a];		
			
}
system ("cls");
for (int i = 0 ; i < 9; i++){
	byr[i] = harga [i]*jmlh[i];
	cout << nm[i] <<byr [i] << endl ;
	
}

tot = byr [0]+byr[1]+byr[2]+byr[3]+byr[4]+byr[5]+byr[6]+byr[7]+byr[8];
		cout << "harga yang perlu anda bayar :"<< tot << endl;
		cout << "ketik 5 untuk kembali kepembelian \n";
		cout << "masukan angka :";
		cin >> pilih ;
		if (pilih == 5){
			goto kembali;
		}

		

		
}


int main()
{
	
	cout << "===========================================\n";
	cout << "=============TOKO HANDPHONE BEKAS FAZRI=============\n";
	cout << "===========================================\n";
	
int b =2;
cout << "ketik 2 untuk melanjutkan \nketik apa saja untuk berhenti \nmasukan angka : ";
cin >> b;



if (b==2){

	dh();
	
		
		
		

}
else {
	cout << "program telah berhenti";
}

	


	
	return 0;
}
