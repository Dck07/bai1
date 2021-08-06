#include<stdio.h>

int main () {
	int a;
	
	printf ("Thang nay ho gia dinh tieu thu la:");   scanf ("%d",&a);
	
		if (0 <= a && a <= 50) {
			printf ("Tien dien thang nay la : %d",1000 * a);
			
		} else if (51 <= a && a <= 100) {
			
		    printf ("Tien dien thang nay la : %d",1300 * a);
		    
		} else if (101 <= a && a <= 200) {
			
				printf ("Tien dien thang nay la : %d",1500 * a);
				
		} else if (201 <= a && a <= 300) {
			
			printf ("Tien dien thang nay la : %d",1800 * a);
				
		}	else if (301 <= a && a <= 400) {
			
				printf ("Tien dien thang nay la : %d",2000 * a);
				
		} else if (a >= 401) {
			
			printf ("Tien dien thang nay la : %d",2500 * a);
			
		}
		 else if (a < 0) {
			
			printf ("So dien nhap khong hop le");
		}
			
	
		
	return 0;
}
