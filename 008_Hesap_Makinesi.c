#include <stdio.h>

int main()
{
    int gun = 0;
    printf("Merhaba!\n");
    printf("Haftanin kacinci gunu?:");
    scanf("%d", &gun);
    
    switch(gun){
        case 1:
            printf("Pazartesi\n");
            break;
        case 2:
            printf("Sali\n");
            break;
        case 3:
            printf("Carsamba\n");
            break;
        case 4:
            printf("Persembe\n");
            break;
        case 5:
            printf("Cuma\n");
            break;
        case 6:
            printf("Cumartesi\n");
            break;
        case 7:
            printf("Pazar\n");
            break;
        default:
            printf("Gecersiz bir sayi girdiniz.");
            
    }
    
    switch(gun){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Hafta ici\n");
            break;
        case 6:
        case 7:
            printf("Hafta sonu\n");
            break;
        default:
            printf("Gecersiz bir deger girdiniz! 1-7 arası bir deger giriniz");        
    }
    
    char islem;
    float sayi;
    float sonuc ;
    char stop;
    
    printf("Yapmak istediginiz islem operatorunu giriniz:(+,-,*,/,q)\n");
    scanf(" %c", &islem);
    
    switch (islem){
        case '+':
            printf("Toplamak istediginiz sayıları giriniz:");
            while (1) {
                scanf("%f", &sayi);
                sonuc += sayi;
                printf("Devam ise herhangi bir tusa tamam ise = tıklayınız\n");
                scanf(" %c", &stop);
                if (stop == '=') 
                    break;
            }
            printf("%.2f", sonuc);
            break;
        
        case '-':
            printf("Cikarmak istediginiz sayıları giriniz:");
            scanf("%f", &sonuc);
            while (1) {
                scanf("%f", &sayi);
                sonuc -= sayi;
                printf("Devam ise herhangi bir tusa tamam ise = tıklayınız\n");
                scanf(" %c", &stop);
                if (stop == '=') 
                    break;
            }
            printf("%.2f", sonuc);
            break;
        case '*':
            printf("Carpmak istediginiz sayıları giriniz:");
            scanf("%f", &sonuc);
            while (1) {
                scanf("%f", &sayi);
                sonuc *= sayi;
                printf("Devam ise herhangi bir tusa tamam ise = tıklayınız\n");
                scanf(" %c", &stop);
                if (stop == '=') 
                    break;
            }
            printf("%.2f", sonuc);
            break;
        case '/':
            printf("Bolmek istediginiz sayıları giriniz:");
            scanf("%f", &sonuc);
            while (1) {
                scanf("%f", &sayi);
                sonuc /= sayi;
                printf("Devam ise enter herhangi bir tusa ise = tıklayınız\n");
                scanf(" %c", &stop);
                if (stop == '=') 
                    break;
            }
            printf("%.2f", sonuc);
            break;
        case 'q':
            printf("Karesini almak istediginiz sayıyı giriniz:");
            scanf("%f", &sayi);
            sonuc = sayi*sayi;
            printf("%f", sonuc);
            break;
            

    }
    

    return 0;
}
