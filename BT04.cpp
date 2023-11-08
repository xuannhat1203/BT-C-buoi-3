#include<stdio.h>
#include<math.h>
int main(){
	int number1,number2,number3;
	printf("nhap so thu nhat ");
	scanf("%d",&number1);
	printf("nhap so thu 2 ");
	scanf("%d", &number2);
	printf("nhap so thu 3 ");
	scanf("%d", &number3);
	int max = number1;
	int min = number1;
	if (max<number2){
		max = number2;
	}
	if ( max < number3 ){
		max = number3;
	}
	if ( min > number2){
		min = number2;
	}
	if (min > number3){
		min = number3;
	}
	printf("so lon nhat la %d", max);
	printf("\nso nho nhat la %d ", min);
}
