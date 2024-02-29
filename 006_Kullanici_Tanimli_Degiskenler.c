/* Kullanici tanimli degiskenler:
-Struct: Hafizada bol yer acar. Classlarin atasidir.
-Union: İki veya daha fazla degisken tarafindan ortaklasa kullanılan bir bellek 
birimidir. Verileri anlik olarak tutar. Yani ayni bellek bolgesini kullanan degiskenlerden 
sadece bir tanesi bir anda o bellek bolgesini kullanabilir. Hafiza kisiti varsa union veri
tipi kullanilir. Gomulu yazilimda kullanilması kaynak yonetimi acisindan mantikli olabilir.
-Enum: Enum kategorik deger tutar diyebiliriz. 
*/

#include <stdio.h>
#include <string.h>

struct PersonelBilgisi 
{
    int Yas;
    float Maas;
    char Isim[30];
    char Cinsiyet[6];
};

union bir 
{
    int id;
    double dd;
    char cd;
};

enum KanGrubu
{
    A,
    B,
    AB
};

enum Weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
enum Difficulty { Easy, Medium, Hard };
enum Permissions { Read = 1, Write = 2, Execute = 4 };

    
int main()
{
    struct PersonelBilgisi Personel1;
    
    Personel1.Yas = 23;
    Personel1.Maas = 6800;
    strcpy(Personel1.Isim, "Fatma Kizilkaya");
    strcpy(Personel1.Cinsiyet, "Kadin");
    //Karakter dizisi degiskenlerine Personel1.Isım = "Fatma Kizilkaya" diyerek direkt olarak atama yapamiyoruz. 
	  printf("Personelin maasi: %f\n", Personel1.Maas);
	  printf("Personelin yasi: %d\n", Personel1.Yas);
	  printf("Personelin ismi: %s\n", Personel1.Isim);
	  printf("Personelin cinsiyeti: %s\n\n", Personel1.Cinsiyet);

    struct PersonelBilgisi Personel2 = {24, 50000, "Fadime Kizilkaya", "Kadin"};
	  printf("Personelin maasi: %f\n", Personel2.Maas);
	  printf("Personelin yasi: %d\n", Personel2.Yas);
	  printf("Personelin ismi: %s\n", Personel2.Isim);
	  printf("Personelin cinsiyeti: %s\n\n", Personel2.Cinsiyet);
	
	  struct PersonelBilgisi Personel3;
	  Personel3 = Personel2;
	  printf("Personelin maasi: %f\n", Personel3.Maas);
	  printf("Personelin yasi: %d\n", Personel3.Yas);
	  printf("Personelin ismi: %s\n", Personel3.Isim);
	  printf("Personelin cinsiyeti: %s\n", Personel3.Cinsiyet);

    union bir bd;
  
    bd.id = 21;
    bd.cd = 'A';

    printf("%d %c\n", bd.id, bd.cd); /* 1 */

    bd.id = 127;
    printf("%d %c\n", bd.id, bd.cd); /* 2 */

    bd.dd = 34.75;
    printf("%d %f", bd.id, bd.dd);   /* 3 */  

    enum KanGrubu Kisi1 = AB ;
    printf("\n%d", Kisi1);

    return 0;
}



