#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

int main(void){
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,input;
	a,b,c,d,e,f,g,h,i,j,k,l,m,n=0;
		while(c==d||c==e||c==f||e==f||d==f||d==e){
		srand((unsigned)time(NULL));
		k=rand()%10000;
		c=k/1000;
		//printf("%d\n",c);
		d=k/100;
		l=10*c;
		d=d-l;
		//printf("%d\n",d);
		e=k/10;
		l=d*10;
		m=c*100;
		e=e-l-m;
		//printf("%d\n",e);
		f=k;
		l=c*1000;
		m=d*100;
		n=e*10;
		f=f-l-m-n;
		//printf("%d\n",f);
	}
	//printf("%d%d%d%d",c,d,e,f);
	printf("遊戲開始\n");
		while(a<4){
		a=0;
		b=0;
		printf("請輸入四位數字\n");
		scanf("%d",&input);
		if(input<1000){
			g=0;
		}else{
			g=input/1000;
		}
		h=input/100-g*10;
		j=input%10;
		i=input%100/10;
		//cout<<g<<"\t"<<h<<"\t"<<i<<"\t"<<j<<"\t"<<endl;
		if(g==h||g==i||g==j||h==i||h==j||i==j||g>9||h>9||i>9||j>9){
			cout << "輸入錯誤" <<endl;
			continue;
		}
		if(g==c)
			a=a+1;	
		if(h==d)
			a=a+1;
		if(i==e)
			a=a+1;
		if(j==f)
			a=a+1;
		if(g==d||g==e||g==f&&g!=c)
			b=b+1;
		if(h==c||h==e||h==f&&h!=d)
			b=b+1;
		if(i==d||i==c||i==f&&i!=e)
			b=b+1;
		if(j==d||j==e||j==c&&j!=f)
			b=b+1;
		printf("%dA%dB\n",a,b);
	}
	printf("恭喜答對");
}
