#include <stdio.h>
#include <stdlib.h>

int main() {
    int size=5 , i=0, sum=0;
    int score[size];
    float average;
    
    printf("��J -1 �N���J����\n");

    do {
        if (i >= size) {
            printf("�}�C�w��\n");
            break;
        }
        printf("�п�J���� ==> ");
        scanf("%d", &score[i]);
        if(score[i]==-1)
        	break;
        sum += score[i];
    } while (score[i++] >=0);

    average = (float) sum / i; // �p�⥭���ȡAi ��ܦ��Ī����Ƽƶq
    printf("�������ƬO %6.2f\n", average);

	system("pause");
    return 0;
}

