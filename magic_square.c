#include <stdio.h>
#include <stdlib.h>

int main() {

    int magic[4][4];
	int sum, i, j, start, diff;
	
	printf("輸入 4 * 4 魔術方塊起始值: ");
	scanf("%d", &start);
	
	printf("輸入差值: ");
	scanf("%d", &diff);
	
	for( i = 0; i < 4; i++ )
	{
 		for( j = 0; j < 4; j++ )
 		{
        	magic[i][j] = start;
        	start += diff;
		}
	}
	
	printf("起初的魔術方塊如下 \n");
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
	
	printf("最後的魔術方塊如下 : \n");
	for ( i = 0; i < 4; i++ )
	{
		for ( j = 0; j < 4; j++ )
			printf("%5d", magic[i][j]);
		printf("\n");
	}
   
	system("pause");
    return 0;
}

    
