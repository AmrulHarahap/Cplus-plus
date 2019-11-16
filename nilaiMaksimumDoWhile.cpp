#include <iostream>
using namespace std;

int main(){
	int jumlah, maksimum, i=1, lokasi;
	
	cout << "Masukkan banyak data: ";
	cin >> jumlah;
	
	int array [jumlah];
	
	i = 0;
	do {
		cout << "Data ke-" << i+1 << ": ";
		cin >> array [i];
		i++;
	} while (i < jumlah);
	
	maksimum = array[0];
	
	i = 0;
	do {
		if (array[i] > maksimum){
			maksimum = array[i];
			lokasi = i+1;
		}
	i++;
	} while (i < jumlah);

	cout << "Nilai maksimum dari data yang dimasukkan adalah: " << maksimum 
	<< " dan terletak pada data ke-" << lokasi << endl;
}
