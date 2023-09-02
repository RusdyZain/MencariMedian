#include<iostream>
using namespace std;
void median(int data[], int n) {
	for(int i=0; i<n; i++) {
		cout << data[i] << " ";
	}
}
void eliminasi(int data[],int n) {
	double h = 0;
	int x = n%2;
	if(x != 0) {
		//Mencari Nilai Maksimum Setengah Panjang Bilangan Array
		for(int j = n/2; j>0; j--) {
			int x = 0;
			for(int i=0; i<n; i++) {
				if(data[i]>x) {
					x = data[i];
				}
			}
			//Eliminasi Nilai Maksimum Bilangan Menjadi 0
			for(int i=0; i<=n; i++) {
				if(x==data[i]) {
					data[i] = 0;
					break;
				}
			}
		}
		//Mencari Nilai Minimum Setengah Panjang Bilangan Array
		for(int j = n/2; j>0; j--) {
			int y;
			for(int i=0; i<n; i++) {
				for(int j=n-1; j>-1; j--) {
					if(data[i]<data[j]) {
						if(data[i]!=0) {
							y = data[i];
						}
					}
				}
			}
			//Eliminasi Nilai Minimum Bilangan Menjadi 0
			for(int i=0; i<n; i++) {
				if(y==data[i]) {
					data[i] = 0;
					break;
				}
			}
		}
		//Menentukan Median Bilangan
		for(int i=0; i<n; i++) {
			h = h + data[i];
		}
		cout<<h;
	} else if(x == 0) {
		//Mencari Nilai Minimum Setengah Panjang Bilangan Array
		for(int j =(n/2)-1; j>0; j--) {
			int x = 0;
			for(int i=0; i<n; i++) {
				if(data[i]>x) {
					x = data[i];
				} 
			}
			//Eliminasi Nilai Maksimum Bilangan Menjadi 0
			for(int i=0; i<=n; i++) {
				if(x==data[i]) {
					data[i] = 0;
					break;
				}
			}
		}
		//Mencari Nilai Minimum Setengah Panjang Bilangan Array
		for(int j = (n/2)-1; j>0; j--) {
			int y;
			for(int i=(n-1); i>-1; i--) {
				for(int j=0; j<n; j++) {
					if(data[i]>data[j]) {
						if(data[i]!=0) {
							y = data[i];
						}
					}
				}
			}
			//Eliminasi Nilai Minimum Bilangan Menjadi 0
			for(int i=0; i<n; i++) {
				if(y==data[i]) {
					data[i] = 0;
					break;
				}
			}
		}
		//Menentukan Median Bilangan
		for(int i=0; i<n; i++) {
			h = h + data[i];
		}
		cout<<h/2;
	}
}
int main() {
	int data[] = {10,13,2,4,6,5,9,11,38};
	int a = sizeof(data)/sizeof(int);
	cout<<"Penjabaran data: ";
	median(data,a);
	cout<<endl;
	cout<<"Median dari data tersebut adalah: ";
	eliminasi(data,a);
	cout<<endl;
	median(data,a);
	
	return 0;
}