#include <stdio.h>


#define BUYUK_SAYI 100000 //on islemci yani proprocessor islemleridir. Sonunda = veya ; kullanılmaz.
#undef BUYUK_SAYI //Tanımını kaldır manasına gelir.
#define BUYUK_SAYI 200000 //define ile tanımlanan degiskenler global degiskenlerdir. Sabit tanımlanan
//degiskenler buyuk harflerle tanımlanır.

/*Global degiskenler, eger programcı tarafından belirtilmezse
 * derleyici tarafından otomatik olarak ilklendirilirler.
 * Veri Tipi        Varsayılan İlklendirme Degeri
 * int                      0
 * char                    '\0'
 * float                    0
 * double                   0
 * pointer                 NULL
 *
 * Global degiskenler main dısında tanımlanmalı.
 * */
int g_degisken1; //Program tarafından ilklendirme yapılır.
int b;
int main() {
    /*C programlama dilinde sabitler (constantlar)
 * evrnsel sabitler,
 * program boyunca degismeyecek sabitlerin const olarak tanımlanması daha uygundur.
 * const degiskenlerine atama(assignment) yapamayız(sadece okunabilir bir degisken olmus oldu).
 * */
    const float PI = 3.14;
    const saattekiDakikasayisi = 60;

    /*Lokal degiskenler, eger programcı tarafından belirtilmezse
     * derleyici tarafından otomatik olarak ilklendirilmezler.
     * Bilgisayar belleginde kalan garip/tuhaf degerleri almamaları
     * icin programcılar tarafından ilklendirilmelerinde fayda vardır.
     * */
    int b = 0; //Lokal  degisken global degiskeni ezer.
    
    return 0;
}

