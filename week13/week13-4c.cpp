#include <stdio.h>
int main()
{
	int sec,now,i,speed;
	scanf("%d",&sec);
	int fast=1;

	for(i=2;i<=10;i++){
		scanf("%d",&now);
		if(now<sec){
			sec=now;
			fast=i;
		}
	}
	speed=60*60*1.2/sec;
	printf("%d",speed);
}
