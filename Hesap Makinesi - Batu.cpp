#include <iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish"); 
	bool sonuc=true;
	
	cout<<"1-Toplama ��lemi"<<endl;
	
	cout<<"2-��karma ��lemi"<<endl;
	
	cout<<"3-�arpma ��lemi"<<endl;
	
	cout<<"4-B�lme ��lemi"<<endl;
	
	cout<<"5-�st Alma ��lemi"<<endl;
	
	cout<<"6-Fakt�riyel Alma ��lemi"<<endl;
	
	cout<<"Hangi i�lemi yapmak istiyorsunuz?"<<endl;
	
	
	while(sonuc){
		cout<<endl;
		cout<<"��lemin numaras� = ";
		int x,y,z;
		
		cin>>z;
		cout<<endl;
		switch(z){
			
			case 1:{
				cout<<endl;
				cout<<" Toplama ��lemi -> L�tfen 1.Say�y� giriniz: ";
				cin>>x;
				cout<<" Toplama ��lemi -> L�tfen 2.Say�y� giriniz: ";
				cin>>y;
				cout<<"Sonuc= "<<x+y ;
				}
				break;
			 
			 case 2:{
			 	cout<<endl;
			 	cout<<" ��karma ��lemi -> L�tfen 1.Say�y� giriniz: ";
			 	cin>> x;
			 	cout<<" ��karma ��lemi -> L�tfen 2.Say�y� giriniz: ";
			 	cin>> y;
			 	cout<<"Sonuc= "<<x-y ;
				break;
				
			 case 3:{
			 	cout<<endl;
			 	cout<<" �arpma ��lemi -> L�tfen 1.Say�y� giriniz: ";
			 	cin>> x;
			 	cout<<" �arpma ��lemi -> L�tfen 2.Say�y� giriniz: ";
			 	cin>> y;
			 	cout<<"Sonu�= "<<x*y ;
				break;
				
			 case 4:{
			 	cout<<endl;
			 	cout<<" B�lme ��lemi -> L�tfen 1.Say�y� giriniz: ";
			 	cin>> x;
			 	cout<<" B�lme ��lemi -> L�tfen 2.Say�y� giriniz: ";
			 	cin>> y;
			 	if(x<y){
			 		cout<<" Hata ; ( X Y ' den k���k olamaz!) "<<"\n";
				 }else{
				 	cout<<"Sonu� = "<<x/y ;
				 }
				break;
			}
				
			 case 5:{
			 	cout<<endl;
			 	cout<<" �st Alma ��lemi -> L�tfen 1.Say�y� giriniz: ";
			 	cin>> x;
			 	cout<<" �st Alma ��lemi -> L�tfen 2.Say�y� giriniz: ";
			 	cin>> y;
			 	int temp=1;
			 	for (int i=0; i<y; i++){
			 		temp=temp * x;
				 }
				 
				 cout<<temp;
				break;
			}
			 case 6:{
			 	cout<<endl;
			 	cout<<" Faktoriyel Alma -> L�tfen say�y� giriniz: ";
			 	cin>> x;
			 	int sonuc=x;
			 	for (int m=x; m>1; m--)
			 	{
			 		sonuc*=(m-1);
				 }
				 cout<<"Girdi�iniz say�n�n fakt�riyeli = "<<sonuc;
				break;
			 }
			 default:{
			 	cout<<"L�tfen verilen i�lemlerden birini giriniz. Harici �al��mayacakt�r. Te�ekk�rler \n";
				break;
			}
			}
			}
			}
			}
			}
		
	
	

