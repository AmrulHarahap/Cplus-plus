#include <iostream>
using namespace std;

int main(){
	int jumlah, maksimum, i = 1;
	
	cout << "Masukkan banyak data: ";
	cin >> jumlah;
	
	int array [jumlah];
	
	i = 0
	while (i < jumlah){
		cout << "Data ke-" << (i+1) << ": ";
		cin >> array [i];
	} i++;
	
	maksimum = array[0];
	
	i = 0
	while (i < jumlah){
		if (array[i] > maksimum){
			maksimum = array[i];
		}
	} i++;

	cout << "Nilai maksimum dari data yang dimasukkan adalah: " << maksimum << endl;
}
