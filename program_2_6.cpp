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

float fun_c(int a, int b, int c, float*x1, float*x2){
	float d;
	float ds;
	d = (b*b) - (4*a) *c;
	cout<<"Delta: "<<d<<endl;
	ds = sqrt (d);
	if(d>0){

		*x1 = (-b - ds)/(2*a);
		*x2 = (-b + ds)/(2*a);
		return 2;
	} else if (d==0){
		
		*x1 = -b/(2*a);
		
		return 1;
	} else if (d<0){

		return 0;
	}

}

float fun_d(int a, int p, int q, float*x1, float*x2){
	
	int b,c;
	
	b = -2*(a*p);
	c = a*(p*p)+q;
	
	
	
	float d;
	float ds;
	d = (b*b) - (4*a) *c;
	cout<<"Delta: "<<d<<endl;
	ds = sqrt (d);
	if(d>0){

		*x1 = (-b - ds)/(2*a);
		*x2 = (-b + ds)/(2*a);
		return 2;
	} else if (d==0){
		
		*x1 = -b/(2*a);
		
		return 1;
	} else if (d<0){

		return 0;
	}

	
	
}


int main(){

int x;
cout<<"Wybierz ktora funkcje chcesz obliczyc:"<<endl;
cout<<"1. ax + b"<<endl<<"2. ax + by + c = 0 "<<endl<<"3. ax2 + by + c = 0 "<<endl<<"4. y= a(x-p)2+q";
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
} else if(x == 3){
	cout<<"Podaj a:";
	cin>>a;
	cout<<"Podaj b:";
	cin>>b;
	cout<<"Podaj c:";
	cin>>c;
	cout<<endl;	
	
	if(a == 0){
		
		x0 = fun_a(b,c);
		cout<<"Miejsce zerowe jest rowne = "<< x0<<endl;
		
		
	} else{
		int iloscmz; 
		iloscmz=fun_c(a,b,c,&x1,&x2);
		
		if(iloscmz == 1){
		cout<<"x0 = "<< x1<<endl;
	} else if (iloscmz == 2){
		cout<<"x1 = "<< x1<<endl;
		cout<<"x2 = "<< x2;
	} else{
		cout<<"Brak miejsc zerowych";
	}	
	}

} else if(x == 4){
	cout<<"Podaj a:";
	cin>>a;
	cout<<"Podaj p:";
	cin>>b;
	cout<<"Podaj q:";
	cin>>c;
	cout<<endl;	
	
	if(a == 0){
		
		x0 = fun_a(b,c);
		cout<<"Miejsce zerowe jest rowne = "<< x0<<endl;
		
		
	} else{
		int iloscmz; 
		iloscmz=fun_d(a,b,c,&x1,&x2);
		
		if(iloscmz == 1){
		cout<<"x0 = "<< x1<<endl;
	} else if (iloscmz == 2){
		cout<<"x1 = "<< x1<<endl;
		cout<<"x2 = "<< x2;
	} else{
		cout<<"Brak miejsc zerowych";
	}	
	}


}



 return 0;
}
