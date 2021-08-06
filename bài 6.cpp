#include<stdio.h>
#include<math.h>

int main () {
	
	 int a;
	 
	 float bk,cd,cr,c1,c2,c3;
	 
	 printf ("Nhap so 1 de tinh dien tich hinh tron\n");
	 
	 printf ("Nhap so 2 de tinh dien tich hinh chu nhat\n");
	 
	 printf ("Nhap so 3 de tinh dien tich hinh tam giac\n");
	 
	 printf ("Tuy chon so:");   scanf ("%d",&a);
	 
	
	if (a == 1) {
	 	
	 	
	 	printf ("Nhap ban kinh hinh tron:",bk);   scanf("%2f",&bk);
	 	
	 	printf ("Dien tich hinh tron la: %2f",bk * 3.14 * 2); 
	 	
	 
	} else if (a == 2) {
	 	
	 	printf (" Nhap chieu dai:",cd);   scanf ("%2f",&cd);
	 	
	 	printf (" Nhap chieu rong:",cr);   scanf ("%2f",&cr);
	 	
	 	printf ("Dien tich hinh chu nhat la: %2f",cd * cr);
	 	
	 	 
	} else if (a ==3) { 
	 
	    		
	 	printf ("Nhap chieu dai 3 canh cua tam giac:",c1,c2,c3);   scanf ("%2f%2f%2f",&c1,&c2,&c3);
		 
		 printf ("Dien tich hinh tam giac la: %2f",sqrt( (( c1 + c2 + c3 ) / 2 )*(( c1 + c2 + c3 ) / 2 - c1)*(( c1 + c2 + c3 ) / 2 - c2)*(( c1 + c2 + c3 ) / 2 - c3)) ); 
	
          } 
          
    
	 
	return 0;
}
