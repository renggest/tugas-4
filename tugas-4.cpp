#include <iostream>
using namespace std;

class Kalkulator {
	public:
		int hitung_sum(int nilai_kelas[], int length){
			int sum = 0;

			for(int i = 0; i < length; i++){
				sum += nilai_kelas[i];
			}
			
			return sum;
		}
		
		float hitung_rata(int sum, int length){
			
			float rata_rata = (float)sum / (float)length;
			return rata_rata;
		}
};

int main(){
	//INPUT BANYAK DATA
	int x;
	cout<< "banyak nilai yang akan dimasukkan: ";
	cin>>x;
	int nilai_kelas[x];
	
	//INPUT PER DATA
	for( int i=0; i < x; i++){
		 int y;
		 cout<<"Masukkan Nilai Ke-" <<i+1 <<": ";
		 cin>>y;
		 nilai_kelas[i]=y;
	}
	int length = sizeof(nilai_kelas) / sizeof(nilai_kelas[0]);
	 Kalkulator kalkulator;
	 //HITUNG SUM
	 int sum = kalkulator.hitung_sum(nilai_kelas, length);

    // HITUNG RATA-RATA
	 float rata = kalkulator.hitung_rata(sum, length);
	 cout << "Rata-rata nilai: " << rata;

    return 0;
}