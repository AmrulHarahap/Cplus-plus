#include <iostream>
using namespace std;

int main(){
	int jumlah, maksimum, i = 1, lokasi; // deklarasi variabel
	
	cout << "Masukkan banyak data: ";
	cin >> jumlah;
	
	int array[jumlah]; 
	
	for (i = 0; i < jumlah; i++){
		cout << "data ke-" << (i+1) << ": ";
		cin >> array [i]; //array[3] = {12,56,89}
	}
	
	maksimum = array[0];
	
	for (i = 0; i < jumlah; i++){
		if (array[i] > maksimum){
			maksimum = array[i];
			lokasi = i+1;
		}
	}
	
	cout << "Nilai maksimum dari data yang dimasukkan adalah " << maksimum 
	<< " dan terletak pada data ke-" << lokasi << endl;
}
