#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	int *i, *j; // �����ܼ� 
	
	printf("�п�J a, b����: ");
	scanf("%d %d", &a, &b);
	i = &a; // i ���V a �� address 
	j = &b; // j ���V b �� address 
	
	printf("�ܼ� a ���� = %d\n",a);
	printf("�ܼ� a ����} = %x\n",*i);
	printf("�ܼ� a ���� = %d\n",*&a);  // ���V a �� address 
	
	printf("�ܼ� a ����} = %d\n",&*i); // �����ܼ� i �� address 
	printf("�ܼ� a ����} = %d\n",&a);
	
	
	printf("�ܼ� b ���� = %d\n",b);
	printf("�ܼ� b ����} = %x\n",*j);
	printf("�ܼ� b ���� = %d\n",*&b);
	
	printf("�ܼ� b ����} = %d\n",&*j);
	printf("�ܼ� b ����} = %d\n",&b);


	system("pause");
	return 0;
}

