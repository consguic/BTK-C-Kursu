#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000

int main() {
    //Dosyamızın referansını tutan işaretçiyi tanımlıyoruz.
    FILE *fptr;
    FILE *fptr2;
    char veri[VERI_BOYUTU];
    char karakter;
    
    //Dosyayı yazma modunda açıyoruz.
    fptr = fopen("yeni.txt", "a+");
    printf("Yazmak istediklerinizi alalim:\n");
    fgets(veri, VERI_BOYUTU, stdin);
    fputs(veri, fptr);
    fclose(fptr);


    //Dosyayı okuma modunda açıyoruz.
    fptr2 = fopen("yeni.txt", "r");
    if(fptr2==NULL) {
        printf("Dosya okunamadi. Izinlerinizi ve dosyanin ilgili konumda olup olmadigini kontrol ediniz.");
        exit(EXIT_FAILURE);
    }
    do {
        karakter = fgetc(fptr2);
        putchar(karakter);
    } while (karakter!=EOF); //Her .txt dosyasının sonunda bir EOF karakteri bulunur.
    fclose(fptr2);
    
    return 0; //veya exit(0);
    // veya exit(EXIT_SUCCESS); basari ile cikma manasina gelir
}
