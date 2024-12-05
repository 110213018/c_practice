#include <stdio.h>
#include <stdlib.h>
int result(int way, int one, int two){
	if (way ==1){
		return one+two;
	}else{
		return one*two;
	}
}

int main(){
	int way, one, two;
	char operand;
	
	printf("請輸入 1 或 2 選擇計算方式\n1: 加法運算\n2: 乘法運算\n==>");
	scanf("%d",&way);

    printf("請輸入兩數值");
    scanf("%d %d",&one, &two);
    printf("%d %c %d = %d",one ,way==1?'+':'*',two ,result(way, one, two));
}
