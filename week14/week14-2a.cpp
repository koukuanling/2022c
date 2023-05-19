#include <stdio.h>
int main()
{
	int n,a=0,b=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		a=i*11;
		b=b+a;
	}
	printf("%d",b);
}
