#include<stdio.h>
//function prototype
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-d demo)
  	//a
  	functionM();
  	//b
  	a=functionM();
  	//c
  	b=functionN(a, b);
  	//d
  	r=functionO(r, a, s, b);
  	//e too many arguments to function 'double functionP(int a, int n, int b, int c)'
  	//s=functionP(a, b, c, d, e);
  	//f
  	u=functionM();
  	//g
  	c=d+functionN(r, s);
  	//h
  	t=s*functionO(r, a, r, a);
  	//i
  	a=v+functionP(r, s, t, t);
  	//j
  	functionP(functionN(a, a), s, t, t+r);
  	//k
  	v=functionP(functionN(a, a), s, t, t+r);
}

//function body/defintion
double functionM(void){}
int functionN(int n, double x){}
double functionO(double, int, double, int){}
double functionP(int a, int n, int b, int c){}
