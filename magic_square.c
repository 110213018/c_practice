#include <stdio.h>
#include <stdlib.h>

int main() {

    int magic[4][4];
	int sum, i, j, start, diff;
	
	printf("��J 4 * 4 �]�N����_�l��: ");
	scanf("%d", &start);
	
	printf("��J�t��: ");
	scanf("%d", &diff);
	
	for( i = 0; i < 4; i++ )
	{
 		for( j = 0; j < 4; j++ )
 		{
        	magic[i][j] = start;
        	start += diff;
		}
	}
	
	printf("�_�쪺�]�N����p�U \n");
	for ( i = 0; i < 4; i++ )
	{
    	for ( j = 0; j < 4; j++ )
        	printf("%5d", magic[i][j]);
    	printf("\n");
    }
	
	sum = magic[0][0] + magic[3][3];
	
	for ( i = 0, j = 0; i < 4; i++, j++ )
		magic[i][j] = sum - magic[i][j];
	for ( i = 0, j = 3; i < 4; i++, j-- )
		magic[i][j] = sum - magic[i][j];
	
	printf("�̫᪺�]�N����p�U : \n");
	for ( i = 0; i < 4; i++ )
	{
		for ( j = 0; j < 4; j++ )
			printf("%5d", magic[i][j]);
		printf("\n");
	}
   
	system("pause");
    return 0;
}

    
