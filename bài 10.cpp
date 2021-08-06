#include<stdio.h>

int main () {
	
	int a,b,c;
	
	printf ("Nhap 3 so nguyen :");   scanf ("%d%d%d",&a,&b,&c);
	
	if (b > a && b < c) {
		
		printf("So %d la so trung vi",b);
			
	} else if (b > c && b < a) {
		
		printf ("So %d la so trung vi",b);
		
		
	} else if (c > b && c < a) {
		
		printf ("So %d la so trung vi",c);
		
	} else if (c > a && c < b) {
		
		printf ("So %d la so trung vi",c);
		
	} else if (a > c && a < b) {
		
		printf( "So %d la so trung vi",a);
		
	} else if (a > b && a < c) {
		
		printf ("So %d la so trung vi",a);
		
	} else if (a == b && a == c) {
		
		printf ("Ba so bang nhau");
	}
	 
	return 0;
}
