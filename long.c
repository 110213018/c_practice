#include <stdio.h>
#include <stdlib.h>

int main(){
	long int i1, i2, i3; // 長整數宣告 
	unsigned long int j1, j2, j3; //長整數宣告 
	i1=2147483647;
	i2=i1+1;
	i3=i2-1;
	printf("i1 = %d\n",i1);
	printf("i2 = %d\n",i2);
	printf("i3 = %d\n",i3);
	
	j1=4294967295;
	j2=j1+1;
	j3=j2-1;
	printf("j1 = %lu\n",j1);
	printf("j2 = %lu\n",j2);
	printf("j3 = %lu\n",j3);
	system("pause");
    return 0;
}
