#include<stdio.h>

int main () {
	
	long long int a;
	printf ("Tong doanh so cua cong ty la :");   scanf ("%lld",&a);
	if (0 <= a && a <= 200000000) {
		
		printf ("Thue cua cong ty phai dong la: %lld",a * 3 / 100);
		
	} else if  (200000000 <= a && a <= 500000000) {
		
		printf ("Thue cua cong ty phai dong la: %lld",a * 5 / 100);
		
	}  else if  (a > 1000000000) {
		
		printf ("Thue cua cong ty phai dong la: %lld",a * 10 / 100);
		
	}  else if  (a < 0) {
		
		printf ("Khong lay thue");
		
	}
	
	return 0;
}
