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
	return 0;
}
