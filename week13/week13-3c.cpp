#include <stdio.h>
int main()
{
	int a,b,s=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%3==0){
			s=s+i;
		}
	}
	printf("%d",s);
}
