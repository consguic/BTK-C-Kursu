/******************************************************************************
Faktoriyel, ozyinelemeli algoritmaya guzel bir ornektir.
*******************************************************************************/

#include <stdio.h>

int fakto(int sayi);
int fibanocci(int sayi);

int main()
{
    int sayi;
    scanf("%d", &sayi);
    printf("%d\n", fakto(sayi));
    for (int j=0;j<=sayi;j++)
    {
        printf("%d \n", fibanocci(j));
        for(int i = 0; i<=j;i++)
        printf("%d ", fibanocci(i));
        
    }

    return 0;
}

int fakto(int sayi){
    if (sayi <=1) return 1;
    else return fakto(sayi-1)*sayi;
}

int fibanocci(int sayi){
    if (sayi<=1) return sayi;
    return fibanocci(sayi-1) + fibanocci(sayi-2);
}




