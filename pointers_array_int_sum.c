#include <stdio.h>
#include <stdlib.h> 

int main() {
    int array[5];   // �ŧi�}�C�ܼ�
    int *ptr;       // �ŧi�����ܼ�
    int sum = 0;    // �x�s��ƩM���ܼ�
    int i;

    ptr = array;    // �N���Ы��V�}�C���Ĥ@�Ӥ���

    printf("�п�J5�Ӿ�ơG");

    // �ϥΫ��п�J 5 �Ӿ��
    for(i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    // �p��}�C��ƪ��M
    for(i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    // ��X���G
    printf("�}�C��ƩM�O�G%d\n", sum);

    return 0;
}


