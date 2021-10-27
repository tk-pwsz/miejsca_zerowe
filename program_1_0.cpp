#include <iostream>
#include "windows.h" 
#include <math.h>

using namespace std;

float mz(float a, float b){
	float mz;
	mz = -b/a;
	return mz;
}

int main(){

float x0;
float a,b;
cout<<"Podaj a:";
cin>>a;
cout<<"Podaj b:";
cin>>b;
cout<<endl;

if(a == 0){
	
	cout<< "a nie moze byz rowne 0"<<endl;
	
} else{
	x0 = mz(a,b);
	cout<<"Miejsce zerowe jest rowne = "<< x0<<endl;
}

 return 0;
}

