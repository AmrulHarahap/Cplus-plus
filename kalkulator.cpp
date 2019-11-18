#include <iostream>

using namespace std;

int main(){
	float a, b, tambah, kurang, kali, bagi; //Deklarasi variabel nilai dan operator
	char op, pilihan; // Deklarasi variabel op untuk menampung operator yang dipilih

	// Input nilai/angka
	awal:
	system("clear"); //Menghapus layar terminal
	cout << "Masukkan nilai pertama: ";
	cin >> a;

	cout << "1 = tambah, 2 = kurang\n";
	cout << "3 = kali, 4 = bagi\n\n";
	cout << "Pilih operator: ";
	cin >> op;

	cout << "Masukkan nilai kedua: ";
	cin >> b;

	cout << endl;

	// Operator
	tambah = a + b;
	kurang = a - b;
	kali = a * b;
	bagi = a / b;

	// Percabangan dan output hasil
	if (op == '1'){
		cout << a << " ditambah " << b << " = " << tambah;
	} 
	else if(op == '2'){
		cout << a << " dikurang " << b << " = " << kurang;
	} 
	else if(op == '3'){
		cout << a << " dikali " << b << " = " << kali;
	} 
	else if(op == '4'){
		if(a > 0 && b == 0){
			cout << "Tidak dapat dibagi dengan 0";
		}	
		else{
			cout << a << " dibagi " << b << " = " << bagi;
		}
	} 
	cout << endl;

	// Membuat pilihan ulang atau tidak
	cout << "Mau ulang lagi?(Y/n): ";
	cin >> pilihan;
	if (pilihan == 'Y' || pilihan == 'y'){
		goto awal;
	}
	else {
		goto akhir;
	}
	akhir:
	return 0;
}
