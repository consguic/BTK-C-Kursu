#include <stdio.h>

int main(){
    for (int i = 0 ; i<=10; i++ ){
        if (i==5)
        break;          //donguden tamamen cikarir
        printf("i:%d\n", i);
    }
    for (int i = 0; i<=10; i++){
        if(i==5)
        continue;       //dongunun basina gider
        printf("i:%d", i);
    }
    
    
}
