#include<iostream>
#include<locale.h>
using namespace std;




int toplam(){
	
	int x,y;
	cout<<"Toplama Islemi "<<endl;
	cout<<"1.Say�y� giriniz = ";
	cin>>x;
	cout<<"2.Say�y� giriniz = ";
	cin>>y;
	return x+y;
	
	
}

int fark(){
	
	int x,y;
	cout<<"��karma ��lemi "<<endl;
	cout<<"1.Say�y� giriniz = ";
	cin>>x;
	cout<<"2.Say�y� giriniz = ";
	cin>>y;
	return x-y;
	
}

int carpim(){
	
	int x,y;
	cout<<"�arpma ��lemi"<<endl;
	cout<<"1.Say�y� giriniz = ";
	cin>>x;
	cout<<"2.Say�y� giriniz = ";
	cin>>y;
	return x*y;    
	
	
	
	
	
}

int bolum(){
	
	int x,y;
	cout<<"B�lme ��lemi "<<endl;
	cout<<"1.Say�y� giriniz = ";
	cin>>x;
	cout<<"2.Say�y� giriniz = ";
	cin>>y;
	if(x<y){
		
		cout<<"Hata!!! X ' Y den k���k olamaz.'";
		
	}
	else{
		return x/y;
	}
	
	
	
	
	
}

int main(){
	setlocale(LC_ALL, "Turkish"); 
	cout<<"Girdi�iniz 2 Say�n�n Toplam� = "<<toplam()<<endl<<endl;
	cout<<"Girdi�iniz 2 Say�n�n Fark� = "<<fark()<<endl<<endl;
	cout<<"Girdi�iniz 2 Say�n�n �arp�m� = "<<carpim()<<endl<<endl;
	cout<<"Girdi�iniz 2 Say�n�n B�l�m� = "<<bolum()<<endl<<endl;
	
	
	
	return 0;
}
