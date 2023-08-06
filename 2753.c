#include <stdio.h>
int main () {
	int a,b1,b2,b3;
	scanf("%d\n%1d%1d%1d",&a,&b1,&b2,&b3);
	printf("%d\n%d\n%d\n%d",a*b3,a*b2,a*b1,a*b3+a*b2*10+a*b1*100);
}
