#include<stdio.h>
int main(){
	int nam_sinh;
	printf("nhap nam sinh: ");
	scanf("%d",&nam_sinh);
	int nam_hien_tai;
	printf("nhap nam hien tai ");
	scanf("%d", &nam_hien_tai);
	int tuoi = nam_hien_tai - nam_sinh;
	if (tuoi%2==0) {
		printf("tuoi la so chan");
	}else {
		printf("tuoi la so le");
	}
}
