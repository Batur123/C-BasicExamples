#include<iostream>
#include <stdlib.h>
#include<locale.h>
using namespace std;



int main(){
	
	setlocale(LC_ALL, "Turkish"); 
	int x,y,b,j,i;
	int a[x][y];
	
	cout<<"�stedi�iniz matrisin sat�r say�s�n� giriniz = "<<" ";
	cin>>x;
	cout<<"�stedi�iniz matrisin s�tun say�s�n� giriniz = "<<" ";
	cin>>y;
	
	for(int i=0;i<x;i++){
		//j=0;
		for(int j=0;j<y;j++){
		cout<<"a"<<"["<<i<<"]"<<"["<<j<<"] eleman� giriniz = ";
		cin>>b;
		a[i][j]=b;
			
		}
	}

		for(int i=0;i<x;i++){
		cout<<endl;
		for(j=0;j<y;j++)cout<<a[i][j]<<"   ";
		
		}
	return 0;
	}

