#include <stdio.h>

int main(){

    int benimDizim[] = { 3,8,43,2,3,4};
    int enBuyukDeger = benimDizim[0]; //0 da denebilir.
    int konum = 0;
    
    int boyut = sizeof(benimDizim)/sizeof(benimDizim[0]); //Dizideki eleman sayisini hesaplamaya yarar.
    
    printf("%lu\n", sizeof(benimDizim));
    printf("%lu\n", sizeof(benimDizim[0]));
    
    for (int indeks= 0; indeks<boyut; indeks++){
        if(benimDizim[indeks]>enBuyukDeger){
            enBuyukDeger = benimDizim[indeks];
            konum = indeks;
        }
        
    }
    printf("En buyuk deger=%d\n", enBuyukDeger);
    
    /*Cok boyutlu diziler*/
    
    int benimMatrisim [2][3] = {{1,4,2},{3,6,9}};
    
    int i,j;
    for (i = 0; i<2; i++){
        for (j = 0; j<3; j++){
            printf("benimMatrisim[%d][%d]\n",i,j );
        }
    }
    
    
    return 0;    
}
