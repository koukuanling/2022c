#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		a=a+(2*i+1);
	}
	printf("f(%d)=%d",n,a);
}
