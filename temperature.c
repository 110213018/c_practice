#include <stdio.h>
#include <stdlib.h>

int main(){
    double c, f;
    printf("請輸入華氏溫度\n");
    scanf("%lf",&f);
    
    c = (5.0/9.0)*(f-32.0);
    
    printf("攝氏溫度是 %.2f\n",c);
    return 0;
    
}
