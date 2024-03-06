#include <stdio.h>
#include <math.h>

int sayiAsalmi(int sayi);
int sayiArmstrongMu(int sayi);
int mukemmelSayiMi(int sayi);

int main()
{
    int sayi;
    scanf("%d",&sayi);
    if(sayiAsalmi(sayi)==0) printf("Sayi asal degil\n");
    else printf("Sayi asaldir.\n");
    if(sayiArmstrongMu(sayi)==1)printf("Sayi armstrongdur.\n");
    else printf("Sayi armstrong degildir.\n");
    if(mukemmelSayiMi(sayi)==1)printf("Sayi mukemmeldir.\n");
    else printf("Sayi mukemmel degildir.\n");

    return 0;
}

int sayiAsalmi(int sayi){
    for(int i = 2; i<sayi;i++){
        if(sayi%i == 0)return 0 ;
    }
}

int sayiArmstrongMu(int sayi){
    int toplam=0, sayiOrijinal=0, sonBasamak=0, basamakSayisi=0;
    sayiOrijinal = sayi;
    basamakSayisi = (int)log10(sayi) +1;
    while(sayi>=1){
        
        sonBasamak = sayi%10;
        sayi = (int)(sayi/10);
        toplam += pow(sonBasamak,basamakSayisi);
    }

    return(sayi == toplam);
}

int mukemmelSayiMi(int sayi){
    int i, toplam = 0;
    for (i=1; i<sayi; i++){
        if (sayi%i == 0) toplam+=i;
    }
    if (toplam == sayi) return 1;
    else return 0;
}




