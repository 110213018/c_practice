#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=2, sum=0;

    for (i=2; i<=100; i++){
        if(i % 2 != 0){ 
            continue;
        }
        sum += i;
    }
    
    printf("Á`©M¬O:%d\n",sum);
    
    system("pause");
    return 0;
}

