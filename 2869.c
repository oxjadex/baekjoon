#include <stdio.h>
int main()
{
	long long int a, v, b, i, n=0, c=0; 
	scanf("%lld %lld %lld", &a, &b, &v);
	while (n<v) {
		n+=a;
		c++;
		if (n>=v) break;
		else n-=b;
	}
	printf("%lld", c);
	return 0;
}