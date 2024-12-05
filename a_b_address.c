#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	int *i, *j; // 指標變數 
	
	printf("請輸入 a, b的值: ");
	scanf("%d %d", &a, &b);
	i = &a; // i 指向 a 的 address 
	j = &b; // j 指向 b 的 address 
	
	printf("變數 a 的值 = %d\n",a);
	printf("變數 a 的位址 = %x\n",*i);
	printf("變數 a 的值 = %d\n",*&a);  // 指向 a 的 address 
	
	printf("變數 a 的位址 = %d\n",&*i); // 指標變數 i 的 address 
	printf("變數 a 的位址 = %d\n",&a);
	
	
	printf("變數 b 的值 = %d\n",b);
	printf("變數 b 的位址 = %x\n",*j);
	printf("變數 b 的值 = %d\n",*&b);
	
	printf("變數 b 的位址 = %d\n",&*j);
	printf("變數 b 的位址 = %d\n",&b);


	system("pause");
	return 0;
}

