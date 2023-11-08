#include<stdio.h>
#include<math.h>
int main(){
	float toan;
	float van ;
	float anh;
	printf("nhap diem toan ");
	scanf("%f", &toan);
	printf("nhap diem van ");
	scanf("%f", &van);
	printf("nhap diem anh ");
	scanf("%f", &anh);
	float tong_diem = van+toan+anh;
	printf("%.2f", tong_diem);
	float diem_trung_binh = (toan+van+anh)/3;
	printf("\n%.2f", diem_trung_binh);
}
