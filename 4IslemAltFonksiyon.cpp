#include<iostream>
#include<locale.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;


int toplama();
int cikarma();
int bolme();
int carpma();
void anamenu(){
	
    setlocale(LC_ALL, "Turkish");
	int islem;
    bool islemtekrar=true;
	cout<<"Hesap Makinesine Ho�geldiniz!!!"<<endl<<endl;
		while(islemtekrar){
		
	cout<<"Hangi i�lemi yapmak istiyorsunuz?"<<endl;
	cout<<"1-Toplama 2-��karma 3-�arpma 4-B�lme"<<endl;
	cout<<"Yapmak �stedi�iniz ��lem = ";
	cin>>islem;
	switch(islem){
		case 1:{
			
			toplama();
			break;
		}
		
		case 2:{
			
			cikarma();
			break;
		}
		
		case 3:{
			
			carpma();
			break;
		}
		
		case 4:{
			
			bolme();
			break;
		}
		
		default:{
			cout<<"=================================================="<<endl;
			cout<<"                    ""HATA!!!"<<endl;
			cout<<"L�tfen sadece verilen i�lemlerden birini se�iniz"<<endl;
			cout<<"=================================================="<<endl;
			anamenu();
			break;
		} 
	}
		
	
	}
	


}

int toplama(){
	
	int x,y;
	cout<<"========================="<<endl;
	cout<<"Toplama ��lemi"<<endl;
	cout<<"1.Say�y� giriniz"<<" ";
	cin>>x;
	cout<<"2.Say�y� giriniz"<<" ";
	cin>>y;
	
	cout<<"2 Say�n�n toplam� = "<<x+y<<endl;
	cout<<"========================="<<endl;
 
}

int cikarma(){
	
	int x,y;
	cout<<"========================="<<endl;
	cout<<"��karma ��lemi"<<endl;
	cout<<"1.Say�y� giriniz"<<" ";
	cin>>x;
	cout<<"2.Say�y� giriniz"<<" ";
	cin>>y;
	
	cout<<"2 Say�n�n fark� = "<<x-y<<endl;
	cout<<"========================="<<endl;
}

int carpma(){
	
	int x,y;
	cout<<"========================="<<endl;
	cout<<"�arpma ��lemi"<<endl;
	cout<<"1.Say�y� giriniz"<<" ";
	cin>>x;
	cout<<"2.Say�y� giriniz"<<" ";
	cin>>y;
	
	cout<<"2 Say�n�n �arp�m� = "<<x*y<<endl;
	cout<<"========================="<<endl;
}

int bolme(){
	
	int x,y;
	cout<<"========================="<<endl;
	cout<<"B�lme ��lemi"<<endl;
	cout<<"1.Say�y� giriniz"<<" ";
	cin>>x;
	cout<<"2.Say�y� giriniz"<<" ";
	cin>>y;
	
	if(x<y){
		cout<<"==============================="<<endl;
		cout<<"1.Say� 2.Say�dan k���k olamaz."<<endl;
		cout<<"ANA MENUYE GERI DONUYORSUNUZ"<<endl;
		cout<<"==============================="<<endl;
		anamenu();
	
	}
	else{
		cout<<"2 Say�n�n b�l�m� = "<<x/y<<endl;
	}
	cout<<"========================="<<endl;
}

int main(){
	anamenu();
}
