#include<stdio.h>

int main () {
	
	float a;
	
	int x;
	
	printf ("Nhap so 1 de chon don vi tien te Viet Nam\n");
	
	printf ("Nhap so 2 de chon don vi tien te My\n");
	
	printf ("Chon don vi tien te:");   scanf ("%d",&x);
	
	if (x == 1) {
		
		printf ("Nhap so tien:");   scanf ("%f",&a);
		
		printf ("My: %0.2f USD\n",a / 23000);
		
		printf ("Nhat: %0.2f Yen\n",a * 0.004805217);
		
		printf ("Anh: %0.2f Pound\n",a * 0.000031739);
		
		printf ("Han Quoc: %0.2f Won\n",a * 0.05007521739);
		
	} else if (x == 2) {
		
		printf ("Nhap so tien:");   scanf ("%f",&a);
		
		printf ("Nhat: %0.2f Yen\n",a * 110.52);
		
		printf ("Anh: %0.2f Pound\n",a * 0.73);
		
		printf ("Han Quoc: %0.2f Won\n",a * 1151.73);
		
		printf ("Viet Nam: %0.2f VND\n",a * 2300);
		
	} else if (x >= 3) {
		
		printf ("Nhap so tien:");   scanf ("%f",&a);
		
	    printf ("Don vi tien te nay chua duoc cap nhat");
	}
	
	
	return 0;
}
