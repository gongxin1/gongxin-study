#include<iostream>
#include<cmath>
using namespace std;

int main (){
	double den=1,pi=0,fac=1;
	int i=1;
	while(fabs(fac)>1e-6){
	pi=pi+fac;
	den=den+2;
	i=i*(-1);
	fac=i/den;
	}
	cout<<pi<<endl;	
	
	
	return 0;

}
