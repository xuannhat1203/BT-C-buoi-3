#include<stdio.h>
int main(){
	int a = 26;
	int b;
	printf("nhap luong co ban: ");
	scanf("%d", &b);
	int c;
	printf("nhap so ngay cong thuc te: ");
	scanf("%d", &c);
	int d;
	if( a==c ){
		d = b*(c/26);
	    printf("luong cua nguoi nhan vien la: %d", d);
	}
	int e;
	int f;
	int g = b/a;
	if( a > c){
		e = a - c;
		f = e*(g + g/2);
		d = f + b*(c/26);
		printf("luong cua nhan viean la: %d", d);
	}
	
}
