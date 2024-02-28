#include <stdio.h>

int main(){
    int islem, sayi1, sayi2;
    float toplam, bolum, carpim, mod;
 	printf("Yapacaginiz islemi seciniz:\nToplama=1\nCikarma=2\nCarpma=3\nBolme=4\nİslem no:");
 	scanf("%d",&islem);
 	printf("İki sayi giriniz=\nSayi1:");
 	scanf("%d",&sayi1);
 	printf("\nSayi2=");
 	scanf("%d",&sayi2);

 	if(islem ==1){toplam=sayi1+sayi2;
 		printf("Toplam=%f", toplam);}
 	else if (islem == 2)
 	{
 		bolum = sayi1/sayi2;
 		printf("Bolum= %f", bolum);}
 	else if(islem == 3){
 		carpim = sayi1*sayi2;
 		printf("Carpim = %f", carpim);
 	}  
 	else {
 		mod  = sayi1%sayi2;
 		printf("Mod = %lf", mod);
 	}

	return 0;    
}
