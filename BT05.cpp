#include<stdio.h>
int main(){
	int day,month,year;
	printf("nhap ngay: ");
	scanf("%d", &day);
	printf("nhap thang: ");
	scanf("%d", &month);
	printf("nhap nam: ");
	scanf("%d", &year);
	if (year > 0){
		printf("nam hop le");
	}else {
		printf("nam khong hop le");
	}
	if (day > 0 && day <=28 || day <=29 || day <=30 || day <=31  ){
		printf("ngay  hop le");
	}else {
		printf("ngay khong hop le");
	}
}
