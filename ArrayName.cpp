#include<locale.h>
#include<iostream>
#include<cstring>
using namespace std;


int main(){
	
	setlocale(LC_ALL, "Turkish"); 
	
	char ad[10],soyad[20];
	
	cout<<"Ad�n�z :";
	gets(ad);
	
	cout<<"\nSoyad�n�z:";
	gets(soyad);
	
	cout<<"\nAd Soyad:"<<endl;
	
	puts(ad);
	
	puts(soyad);
	
	cout<<endl;
	
	
	
	
	
	
	
	
	return 0;
}

