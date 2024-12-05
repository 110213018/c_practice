#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	float b;
	char c;
	
//	認識不同資料類型所佔據的記憶體空間與數量
	printf("a 的 address = %p\n",&a);
	printf("sizeof(a)=%d\n",sizeof(a));
	printf("b 的 address = %p\n",&b);
	printf("sizeof(b)=%d\n",sizeof(b));
	printf("c 的 address = %p\n",&c);
	printf("sizeof(c)=%d\n",sizeof(c));
	
	system("pause");
	return 0;
}

