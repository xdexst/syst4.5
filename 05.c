#include <stdio.h>
#include <math.h>
int main () {
	double a=1.2;
	double b=4.8;
	double Y=1.57;
	double S;
	printf("Vector a is %3.1lf, Vector B is %3.1lf, Corner is %3.2f rad \n", a,b,Y);
	S=abs(a)*abs(b)*cos(Y);
	printf(" Scalar product of vectors is %3.1lf\n ", S);
		return 0;
}
