#include <iostream>
#include "windows.h" 
#include <math.h>

using namespace std;

float fun_a(float a, float b){
	float mz;
	mz = -b/a;
	return mz;
}

float fun_b(float a, float b, float c){
	float mz;
	mz = -(b*0+c)/a;
	return mz;
}

int main(){

int x;
cout<<"Wybierz ktora funkcje chcesz obliczyc:"<<endl;
cout<<"1. ax + b"<<endl<<"2. ax + by + c = 0 "<<endl;
cin>>x;


float x0,x1,x2;
float a,b,c;

if(x == 1){
	
cout<<"Podaj a:";
cin>>a;
cout<<"Podaj b:";
cin>>b;
cout<<endl;

	if(a == 0){
		
		if(b == 0){
			cout<< "Funkcja ma nieskonczone miejsca zerowe"<<endl;
		} else {
			cout<< "Funkcja nie ma miejsc zerowych"<<endl;
		} 
		}else{
		x0 = fun_a(a,b);
		cout<<"Miejsce zerowe jest rowne = "<< x0<<endl;
		}
	
	
} else if(x == 2){
cout<<"Podaj a:";
cin>>a;
cout<<"Podaj b:";
cin>>b;
cout<<"Podaj c:";
cin>>c;
cout<<endl;	
	x0=fun_b(a,b,c);
	cout<<"Miejsce zerowe jest rowne = "<< x0<<endl;	
}



 return 0;
}

