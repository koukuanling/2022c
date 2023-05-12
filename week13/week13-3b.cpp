#include <stdio.h>
int main()
{
	int a,b=0,c=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		b=i*i;
		c=b+c;
	}
	printf("%d",c);
}
