#include<iostream>
#include<locale.h>
using namespace std;




int main(){
	
	setlocale(LC_ALL, "Turkish"); 
	int sifre1,sifre2;
	string isim,soyisim;

	
	
	
	cout<<"==========================\n"<<endl;
	cout<<" Bankamati�e Ho�geldiniz\n"<<endl;
	cout<<"==========================\n"<<endl;
	
	cout<<"�sim Soyisim girerken l�tfen T�RK�E karakterler kullanmay�n�z."<<endl;
	cout<<"L�tfen ad�n�z� giriniz: ";
	
	cin>>isim;
	cout<<"L�tfen soyad�n�z� giriniz: ";
	
	cin>>soyisim;
	cout<<"L�tfen 4 haneli ve rakamlardan olu�an bir �ifre belirleyiniz = ";
	cin>>sifre1;
	cout<<"�ifre kaydediliyor..."<<endl<<"..."<<endl<<"..."<<endl;
	
	cout<<"�ifreniz ba�ar�yla kaydedildi."<<endl;
	
	
		for(int i=0;i<3;i++){
		
	cout<<"Bankamatik sistemine girmek i�in l�tfen �ifrenizi giriniz = ";
	
	
	cin>>sifre2;
	
		if(sifre1==sifre2)
	{
		cout<<"Do�ru �ifre! Sisteme ho�geldiniz. Ana men�ye y�nlendiriliyorsunuz."<<endl;
		i=4;
	}
	else
	{
		cout<<"Girdi�iniz �ifre yanl��t�r."<<endl;
		cout<<"Do�ru �ifreyi girmek i�in "<<2-i<<" hakk�n�z kald�. "<<endl;
	}
	

	}

		if(sifre1==sifre2){
			cout<<"Ho�geldiniz Sn."<<isim<<" "<<soyisim<<endl;
		}
		else{
			cout<<"Bankamatik sistemi kilitlenmi�tir. �ifrenizi 3 kere yanl�� girdiniz."<<endl;
		}
	
	bool dongu=true;
	int bakiye=1500,paragirisi,paracikisi;
	int borc=150,faturaodeme,dongu2;
	cout<<"\n"<<endl;
	cout<<endl;
	cout<<"Ana Men�ye Ho�geldiniz. [BATUBANK]"<<endl;
	
	cout<<"Say�n "<<isim<<" "<<soyisim<<endl;
	cout<<"Ne yapmak istiyorsunuz?"<<endl;
	cout<<"1-Bakiyemi g�ster."<<endl;
	cout<<"2-Para �ek"<<endl;
	cout<<"3-Para Yat�r"<<endl;
	cout<<"4-Fatura �de"<<endl;
	
	
	while(dongu){
		cout<<endl;
		cout<<"Yapmak istedi�iniz i�lemi se�iniz= ";
		cin>>dongu2;
		
		switch(dongu2){
			
			case 1:{
				cout<<"Mevcut Bakiyeniz = "<<bakiye;
				
				break;
			}
			
			case 2:{
				cout<<"�ekmek istedi�iniz miktar� giriniz = ";
				cin>>paracikisi;
				bakiye = bakiye - paracikisi;
				cout<<endl;
				cout<<"Para �ekme i�lemi ba�ar�yla ger�ekle�mi�tir."<<endl;
				cout<<"G�ncel Bakiyeniz = "<<bakiye<<endl;
				break;
			}
			
			case 3:{
				cout<<"Yat�rmak istedi�iniz paray� giriniz = ";
				cin>>paragirisi;
				bakiye = bakiye + paragirisi;
				cout<<endl;
				cout<<"Para yat�rma i�lemi ba�ar�yla ger�ekle�mi�tir."<<endl;
				cout<<"G�ncel Bakiyeniz = "<<bakiye<<endl;
				
				break;
			}
			
			case 4:{
				int secim;
				if(borc==150){
				
				cout<<"Bor� miktar�n�z = "<<borc<<endl;
				
				
				cout<<"�demek istiyormusunuz? Evet i�in 1 / Hay�r i�in 2 'ye bas�n�z."<<endl;
				cin>>secim;
					
				if(secim==1){
					
					cout<<"Borcunuzu ba�ar�yla �dediniz."<<endl;
					bakiye = bakiye - borc;
					
					cout<<"G�ncel Bakiyeniz = "<<bakiye<<endl;
					borc = 0;
				}
			    
			    else if(secim==2){
			    	
			    	cout<<"Ana men�ye y�nlendiriliyorsunuz."<<endl;
				}
				
				else{
				
				cout<<"1 veya 2 harici �al��mayacaktir."<<endl;
				}
				
			}
			else{
				
				cout<<"�denmemi� borcunuz yoktur. Bizi se�ti�iniz i�in te�ekk�rler. [BATUBANK]"<<endl;
				break;
			}
			
			}
			
			default:{
							
				cout<<"Verilen i�lemlerden birini se�iniz aksi halde �al��mayacakt�r."<<endl;
				break;
			}
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	

}


	

