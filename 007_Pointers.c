#include <stdio.h>
#include <string.h>

int main()
{
	/* ampersand(&) ile herhangi bir degiskenin adresine erisebiliriz. */
	int i = 12;
	printf("%d, %u\n",i,&i );
	
	int sayi = 10;
	int * isaretci;
	
	isaretci = &sayi;
	
	printf("Sayi degiskeni;%d\n", sayi);
    printf("Sayi degiskeninin adresi:%d\n", &sayi);
    printf("İsaretci degiskeni;%d\n", isaretci);
    printf("İsaretci degiskeninin adresi:%d\n", &isaretci);
    printf("İsaretci degiskeninin isaret ettigi deger:%d\n", *isaretci);
    printf("İsaretci degiskeninin isaret ettigi degerin adresi:%d\n", &*isaretci);
	
	int sayi1, sayi2, toplam;
	int *isaretci1, *isaretci2;
	isaretci1 = &sayi1;
	isaretci2 = &sayi2;
	
	printf("İki sayi giriniz:\n");
	scanf("%d%d", isaretci1, isaretci2);
	toplam = *isaretci1 + *isaretci2;
	printf ("Toplam:%d", toplam);
	
	
	
	
	return 0;
}
