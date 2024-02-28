#include <stdio.h>
#include <math.h>

int main(){
    double taban, kuvvet, sonuc, karekok;
    
    printf("Taban degerini giriniz: ");
    scanf("%lf", &taban);
    printf("Kuvvet degerini giriniz: ");
    scanf("%lf",&kuvvet);
    
    sonuc = pow(taban, kuvvet);
    printf("Sonuc: %lf\n", sonuc);

    karekok = sqrt(sonuc);
    printf("Sonucun karekoku: %lf\n", karekok);
    
    float ana_para, faiz_orani, zaman, bilesik_faiz_miktari;
    printf("Ana parayi giriniz:");
    scanf("%f", &ana_para);
    printf("Zamani giriniz:");
    scanf("%f", &zaman);
    printf("Faiz oranini giriniz:");
    scanf("%f", &faiz_orani);
    bilesik_faiz_miktari = ana_para*(pow((1+faiz_orani/100), zaman));
    printf("Bilesik faiz miktari= %f", bilesik_faiz_miktari);
    
    
    
}
