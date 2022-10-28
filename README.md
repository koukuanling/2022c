# 2022c
資傳一甲程式設計的程式倉庫

# week06

## week06-1 把樓層的鷹架印出來
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int star=i*2-1;
        printf("鷹架:%d樓 %d屋\n", i, star);
    }
}
```

## week06-2 金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space = 5-i;
        int star = i*2-1;
        for(int k=0; k<space; k++){
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }
        printf(" 鷹架:%d樓 %d空格 %d屋\n", i, space, star);
    }
}
```

## week06-3 最大公因數
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數:");
    int a, b, ans;
    scanf("%d %d", &a, &b);

    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d", ans);
}
```

## week06-4 輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數字:");
    int a, b, c;
    scanf("%d %d", &a, &b);

    while(1){
        c = a%b;
        printf("a:%d b:%d c:%d\n", a, b, c);
        a = b;
        b = c;
    }
    printf("中的是:%d",b);
}
```

## week06-5 所有的數值幾乎都成立, 只有 0 是不成立
```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999 ) printf("-999成立\n");
    if(-3 ) printf("-3成立\n");
    if(-2 ) printf("-2成立\n");
    if(-1 ) printf("-1成立\n");
    if( 0 ) printf("0成立\n");
    if( 1 ) printf("1成立\n");
    if( 2 ) printf("2成立\n");
    if( 3 ) printf("3成立\n");
    if( 4 ) printf("4成立\n");
    if( 999 ) printf("999成立\n");
    if( "a==0" ) printf("不管什麼東西,幾乎都成立\n");

}
```


#  week07

##  week07-1
```cpp 
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n", n);


    long long int a=1234567812345678;
    printf("%lld\n", a);
}
```

## week07-2
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld%lld", &a, &b);

    long long int ans;
    for(long long int i = 1; i<=a; i++){
        if(a%i==0 && b%i==0 ) ans=i;
    }
    printf("答案是:%lld",ans);
}
```

## week07-3
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld", &a, &b);

    while(1){
        c=a%b;
        printf("%lld %lld %lld\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是%lld\n", b);
}
```

## week07-4
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入數字:");
    int n;
    scanf("%d", &n);
    while( n>0 ){
        printf("%d\n", n%2 );
        n = n/2;
    }
}

```

# week08

## week08-1 2個for迴圈來畫出直角三角形(有空格、有星星)
```
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);

	for(int n=2; n<=a; n++){
		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ",n);
	}
}

```

## week08-2 while迴圈寫出有空格、有星星的直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int i=1;
	while(i<=n){
		int k=1;
		while(k<=n){
			if(k<=n-i) printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}

}
```

## week08-3 質數判別 (利用 int bad=0; 一開始還沒有還掉, 迴圈裡發現壞掉時 bad=1; 迴圈後面檢查 if(bad==0)就是質數。)
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤獨的質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d 是質數(沒有壞掉)",n);
    else printf("%d 不是質數(早就壞掉了)",n);
}
```

## week08-4 用for迴圈列出一堆數,再逐一進行「質數判斷」
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);

	for(int n=2; n<=a; n++){
		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ",n);
	}
}
```
