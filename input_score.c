#include <stdio.h>
#include <stdlib.h>

int main() {
    int score, i=0;
    
    printf("��J 0 �N���J����\n");

	do{
		printf("�п�J���� ==> ");
    	scanf("%d", &score);
    	i++;
	}while(i==0 || score!=0);

    printf("\n");
    system("pause");
}

