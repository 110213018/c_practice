#include <stdio.h>
#include <stdlib.h>

int main() {
    int num,i,score,fail=0;  // num: �ǥͼ�, score: �ǥͦ��Z, fail: ���ή�ǥͼ� 
    float sum,average;       // sum: �`��, average: ���� 

    printf("��J�ǥͤH�ơG");
    scanf("%d", &num);

	for (i=1; i<=num;i++){   // ��J�C��ǥͪ����Z, �íp���`���򤣤ή�H�� 
		printf("��J��%d��ǥͪ����Z�G",i);  
    	scanf("%d", &score);
    	sum += score;
    	if(score<60){
    		fail++;
		}
	}
	average= sum/num;       // �⥭�� 
	printf("�������Z�O�G%3.2f\n",average);
    printf("���ή�H�ƬO�G%d\n",fail);
    system("pause");
}

