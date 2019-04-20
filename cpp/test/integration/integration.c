#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"integration.h"

//#define MAX_DEPTH 1024
#define MACHINE_PREC 1e-15


double integration(double a, double fa, double b, double fb, double eps,
double(*F)(double x)
)
{
	static int depth=0;
	double fc, v0, v, h=0.0, xc;
	if(a!=b){
	xc=(a+b)/2;
	h=b-a;
	v0=h/2*(fa+fb);
	double err;
	fc=(*F)(xc);
	v=(v0+fc*h)/2;
	err=fabs(v-v0);
	if(err>=3.0*h*eps/(b-a))&&fabs(h)>=(1.0+fabs(xc))*MACHINE_PREC){
	v=integration(a,fa,xc,fc,eps, F) +integration(xc, fc, b, fb, eps, F);
	
	}
	
	}
return v;
}
