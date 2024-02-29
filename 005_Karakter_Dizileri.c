#include <stdio.h>
#include <string.h>

int main()
{
	char karakter1 = 'a';
	char karakters[] = "Fatma";
	char karakters123[] = {'F', 'a', 't', 'm', 'a', '\0'};
	printf("%c\n", karakter1 );
	printf("%lu\n", sizeof(karakters));
	printf("%lu\n", sizeof(karakters123));

	char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%lu", strlen(ingiliz_alfabesi));
	printf("\n...\n");
	printf("%lu", sizeof(ingiliz_alfabesi)); //Bitis karakterini de ekler  (\0)
	printf("\n.........\n");

	char turk_alfabesi[] = "ABCÇDEFGHIİJKLMNOÖPRSŞTUÜVYZ";
	printf("%lu", strlen(turk_alfabesi));
	printf("\n...\n");
	printf("%lu", sizeof(turk_alfabesi));
	printf("\n.........\n");	

	char turk_alfabesi2[50] = "ABCÇDEFGHIİJKLMNOÖPRSŞTUÜVYZ";
	printf("%lu", strlen(turk_alfabesi2));
	printf("\n...\n");
	printf("%lu", sizeof(turk_alfabesi2)); //Hafizada kapladigi alani belirtir
	printf("\n.........\n");	

	char metin1[20] = "Merhaba";
	char metin2[6] = "Fatma";
	char metin3[20] ;
	
	//metin2'yi metin1'in ucuna ekle (sonuc metin1'de depolanir)
	strcat(metin1, metin2);
	printf("%s\n----------\n", metin1);
	printf("%s\n----------\n", metin2);
    
	//Metin1'in içeriğini metin3'e kopyalıyor. Assigmenti böyle yapabiliyoruz.
	strcpy(metin3, metin2);
	printf("%s\n----------\n", metin3);
    
	//strcmp fonksiyonu iki metin arasindaki karakter farkini dondurur
	//Simetrik olmayan bir fonksiyondur. Yani sagdan baslayarak kiyaslama yapar.
	printf("%d\n----------\n", strcmp(metin1, metin3)); //7 
	printf("%d\n----------\n", strcmp(metin1, metin2)); //7
	printf("%d\n----------\n", strcmp(metin2, metin1)); //-7
	printf("%d\n----------\n", strcmp(metin2, metin3)); //0
    
	return 0;
}
