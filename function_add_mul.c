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
	
	printf("�п�J 1 �� 2 ��ܭp��覡\n1: �[�k�B��\n2: ���k�B��\n==>");
	scanf("%d",&way);

    printf("�п�J��ƭ�");
    scanf("%d %d",&one, &two);
    printf("%d %c %d = %d",one ,way==1?'+':'*',two ,result(way, one, two));
}
