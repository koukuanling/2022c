#include <stdio.h>
char line[30];
int main()
{
	scanf("%s",line);

	int N=0;
	while(line[N]!=0){
		N++;
	}

	for(int i=0;i<N;i++){
		if((N-i)%3==0 && i!=0) printf(",");
		printf("%c",line[i]);
	}
}
