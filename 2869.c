#include <stdio.h>
int main()
{
	long long int a, v, b, i, n=0, c=0; 
	scanf("%lld %lld %lld", &a, &b, &v);
	printf("%lld", v%(a-b)==0? v/(a-b)-1:v/(a-b)+1);
	return 0;
}