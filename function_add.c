#include <stdio.h>
#include <stdlib.h>

int add(int one, int two){
	return one+two;
}

int main(){
	int one, two;
    printf("請輸入兩數值\n ==>");
    scanf("%d",&one);
    scanf("%d",&two);
    printf(" %d + %d = %d",one, two, add(one,two));
    
}
