#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Turkish"); 
	
	int sonuc,a,b;
	cout<<"L�tfen 1.say�y� giriniz -> ";
	cin>>a;
	cout<<"L�tfen 2.say�y� giriniz -> ";
	cin>>b;
	
	cout<<"L�tfen yapmak istedi�iniz i�lemin numaras�n� giriniz."<<endl;
	cout<<"1-Toplama ��lemi"<<endl;
	cout<<"2-��karma ��lemi"<<endl;
	cout<<"3-�arpma ��lemi"<<endl;
	cout<<"4-B�lme ��lemi"<<endl;
	cin>>sonuc;
	
	switch(sonuc){
		
		case 1: cout<<"Girdi�iniz iki say�n�n toplam� = "<<a+b<<endl;
		break;
		
		case 2: cout<<"Girdi�iniz iki say�n�n fark� = "<<a-b<<endl;
		break;
		
		case 3: cout<<"Girdi�iniz iki say�n�n �arp�m� = "<<a*b<<endl;
		break;
		
		case 4: cout<<"Girdi�iniz iki say�n�n b�l�m� = "<<a/b<<endl;
		break;
		
		default: cout<<"L�tfen verilen i�lemlerden birini se�iniz. 1,2,3,4 i�lem numaras� hari� herhangi bir i�lem yap�lmamaktad�r.";
		
		
		
		
		
	}
	
	
	
	
	return 0;
}
