#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	int sinav1,sinav2,dersici1,dersici2,ortalama;
	
	printf("Birinci sinav notunuzu giriniz: ");
	scanf("%d",&sinav1);
	
	printf("Ikinci sinav notunuzu giriniz: ");
	scanf("%d",&sinav2);

	printf("Birinci ders ici notunuzu giriniz: ");
	scanf("%d",&dersici1);

	printf("Ikinci ders ici notunuzu giriniz: ");
	scanf("%d",&dersici2);

	ortalama=(sinav1+sinav2+dersici1+dersici2)/4;
	
	printf("\n \n");
	printf("*************|||||*************\n");
	printf("Ogrenci Ortalamasi: %d\n",ortalama);
	printf("*************|||||*************\n");
	
	printf("\n \n \n");
	printf("**        ********         ************\n");               
	printf("**       *                 **        **\n");              
	printf("        *                  **        **\n");               
	printf("**      *                  **        **\n");             
	printf("**       *                 ************\n");              
	printf("**        ********         **        **\n");               
	printf("**                 *       **        **\n");                        
	printf("**                  *      **        **\n");                         
	printf("**                  *      **        **\n");                         
	printf("**                 *       **        **\n");                        
	printf("**        ********         **        **\n");       
	return 0;
}