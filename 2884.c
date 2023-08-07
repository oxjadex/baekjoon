#include <stdio.h>
int main () {
	int a[100]={1,},b[100]={1, }, i=0;
	while (a[i]!=0 && b[i]!=0)
	{
		scanf("%d %d",a[i],b[i]);
		i++;
	}
	while (i--) printf("%d",a[i]+b[i]);
}
