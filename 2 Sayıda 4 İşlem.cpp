#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int a,b;
	cout<<"Bu programda girdi�iniz say�n�n 4 i�lemi al�nacakt�r. Cevap a�a��ya yaz�lacakt�r. E�er 1.say� 2.say� dan k���kse b�lme i�lemi 0 cevab�n� vericektir. ��leminizi ona g�re yap�n�z."<<endl;
	cout<<"L�tfen birinci say�y� giriniz -> ";
	cin>>a;
	cout<<"L�tfen ikinci say�y� giriniz -> ";
	cin>>b;
	
	cout<<"2 Say�n�n Toplam� = "<<a+b<<endl;
	cout<<"2 Say�n�n Fark� = "<<a-b<<endl;
	cout<<"2 Say�n�n �arp�m� = "<<a*b<<endl;
	cout<<"2 Say�n�n B�l�m� = "<<a/b<<endl;
	
	cout<<"Program Batuhan �zko� taraf�ndan yaz�lm��t�r. Kulland���n�z i�in te�ekk�rler :)";
	
	
	
	
	
	
	
	
	return 0;
}
