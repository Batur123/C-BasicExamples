#include<iostream>
using namespace std;


int main(){
	
	int i=0;
	do {
		cout<<++i; // Sona endl komutu eklersek e�er say�lar� yanyana de�ilde alt alta yazmaya ba�l�yor.
		           // Her 20 say�dan sonra bir bo�luk at�yor.
		if(i%20==0) //Burdaki komut say�lar�n her sat�rda 20 ye kadar yaz�lmas�na olanak veriyor.
		cout<<endl;
	} while(i<5000); //Buda say�lar�n ka�a kadar yaz�laca��n�n komutu oluyor.
	
	
	
	
	return 0;
}
