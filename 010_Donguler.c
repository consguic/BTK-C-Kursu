#include <stdio.h>

int main() {
    int ust_limit;
    
    printf("Kaca kadar saymak istiyorsunuz?:\n");
    scanf("%d", &ust_limit);
    
    //for dongusu islemin kac kere yapılacagı onceden bilindigi durumlarda kullanilir.
    for (int i=0;i<=ust_limit;i++){
        printf("%d\n", i);
    }
    
    int i=0;
    //while dongusu islemin kac kere yapilacaginin program calistigi esnada bilinecegi durumlarda kullanilir.
    while(i<=ust_limit){
        printf("%d\n",i);
        i++;
    }
    
    i=0;
    //do .. while dongusu ise islemin while dan farklı olarak kosulun en az bir kere kontrol edilmeden once calismasini saglar.
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=ust_limit);
    return 0;
}
