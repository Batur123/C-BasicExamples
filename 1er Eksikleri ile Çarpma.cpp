#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter ekleme kodudur. �stteki locale.h k�t�phanesi olmadan �al��maz.
	
	cout<<"Bu programda girilen say�lar�n 1er eksi�ini alarak birbirleri ile �arpaca��z."<<endl;
	
	int x,y;
	cout<<"L�tfen birinci say�y� giriniz."<<endl;
	cin>>x;
	cout<<"L�tfen ikinci say�y� giriniz."<<endl;
	cin>>y;
	
	--x;
	--y;
	
	cout<<"Bu i�lemde birinci say�n�n 1 eksi�i = "<<x<<endl; //Buraya x yerine --x yazd���mda say�y� �stte ve burda 1 kere daha ��kar�yor. Yani iki kere ��karma i�lemi yap�yor. Daha nas�l oldu�unu anlayamad�m ama �zerinde �al���yorum. 
	cout<<"�kinyi say�n�n 1 eksi�i = "<<y<<endl; // E�er direk --x yerine x yazarsak �stten 1 ��kart�lm�� halini yaz�yor. Bu i�leme en do�ru uyan y�ntemdir. <<endl; kodu \n ile ayn� g�revdedir.
	cout<<"Bu iki say�n�n �arp�m� = "<<x*y;
	
	
	
	
	return 0;
}
