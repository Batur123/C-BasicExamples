#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Turkish");
	int sayi=10;
	float a,b,c;
	
	a = sayi/3;
	b = sayi/3.0;
	c = (float) sayi/3; //Burdaki c de�eri �stteki iki de�erden t�r�n�n hangisini se�erseniz o de�eri alttakine aktar�r. Mesela diyorum orda (float) veya (double) yaz�yorsa b deki de�eri c ye aynen aktar�yor.
	                    //b'nin de�eri her zaman 3.3333 ��k�yor. Float yaz�nca c ye aktar�yor. Normalde farkl� ��kmas� gereken c de�eri b ile ayn� oluyor. 
	                    //Float yerine int yazarsak a daki de�erin ayn�s�n� yazar. Buraya string yazam�yoruz. long , double , float ve int yazabiliyoruz.
	
	cout<< "a de�eri: "<< a << endl;
	cout<< "b de�eri: "<< b << endl;
	cout<< "c de�eri: "<< c << endl;
	
	
	
	
	return 0;
	
}
