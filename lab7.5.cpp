#include <stdio.h>
long convert(long h, long m, long s);

int main(){
	int hour,min,sec;
	scanf("%d %d %d", &hour, &min, &sec);
	convert(hour, min, sec);
}

long convert(long h, long m, long s){
	h=(h*60)*60;
	m=m*60;
	s=s+h+m;
	printf("%d", s);
}
